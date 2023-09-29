#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node Node;

Node *createNode(int data)
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    ptr->data = data;
    ptr->left = ptr->right = NULL;
    return ptr;
}

Node *insert(Node *root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }
    if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    return root;
}

Node *deleteNode(Node *root, int key)
{
    if (root == NULL)
    {
        return root;
    }
    if (key < root->data)
    {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteNode(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        Node *current = root->right;
        while (current->left != NULL)
        {
            current = current->left;
        }

        root->data = current->data;
        root->right = deleteNode(root->right, current->data);
    }
    return root;
}

void inOrder(Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

void preOrder(Node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(Node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void displayTree(Node *root, int level)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        displayTree(root->right, level + 1);
        for (int i = 0; i < level; i++)
        {
            printf("    ");
        }
        printf("%d\n", root->data);
        displayTree(root->left, level + 1);
    }
}

int height(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    else
    {
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        return (leftHeight > rightHeight) ? leftHeight + 1 : rightHeight + 1;
    }
}

int countNodesAtLevel(Node *root, int level)
{
    if (root == NULL)
    {
        return 0;
    }
    if (level == 0)
    {
        return 1;
    }
    else
    {
        return countNodesAtLevel(root->left, level - 1) + countNodesAtLevel(root->right, level - 1);
    }
}

Node *search(Node *root, int key)
{
    if (root == NULL || root->data == key)
    {
        return root;
    }
    if (key < root->data)
    {
        return search(root->left, key);
    }
    return search(root->right, key);
}

bool isTreeEmpty(Node *root)
{
    return root == NULL;
}

void insertNodeMenu(Node **root)
{
    int data;
    printf("Enter data to insert: ");
    if (scanf("%d", &data) != 1)
    {
        while (getchar() != '\n')
            ;
        printf("Invalid input. Please enter a valid number.\n");
        return;
    }
    *root = insert(*root, data);
    printf("Node with data %d inserted into the tree.\n", data);
}

void deleteNodeMenu(Node **root)
{
    if (isTreeEmpty(*root))
    {
        printf("Tree is empty. Deletion not possible.\n");
    }
    else
    {
        int data;
        printf("Enter data to delete: ");
        if (scanf("%d", &data) != 1)
        {
            while (getchar() != '\n')
                ;
            printf("Invalid input. Please enter a valid number.\n");
            return;
        }
        *root = deleteNode(*root, data);
        printf("Node with data %d deleted from the tree.\n", data);
    }
}

void searchElementMenu(Node *root)
{
    if (isTreeEmpty(root))
    {
        printf("Tree is empty. Search not possible.\n");
    }
    else
    {
        int key;
        printf("Enter data to search: ");
        if (scanf("%d", &key) != 1)
        {
            while (getchar() != '\n')
                ;
            printf("Invalid input. Please enter a valid number.\n");
            return;
        }
        Node *result = search(root, key);
        if (result != NULL)
        {
            printf("Element %d found in the tree.\n", key);
        }
        else
        {
            printf("Element %d not found in the tree.\n", key);
        }
    }
}

void inOrderTraversalMenu(Node *root)
{
    if (isTreeEmpty(root))
    {
        printf("Tree is empty. Traversal not possible.\n");
    }
    else
    {
        printf("In-Order Traversal: ");
        inOrder(root);
        printf("\n");
    }
}

void preOrderTraversalMenu(Node *root)
{
    if (isTreeEmpty(root))
    {
        printf("Tree is empty. Traversal not possible.\n");
    }
    else
    {
        printf("Pre-Order Traversal: ");
        preOrder(root);
        printf("\n");
    }
}

void postOrderTraversalMenu(Node *root)
{
    if (isTreeEmpty(root))
    {
        printf("Tree is empty. Traversal not possible.\n");
    }
    else
    {
        printf("Post-Order Traversal: ");
        postOrder(root);
        printf("\n");
    }
}

void displayTreeMenu(Node *root)
{
    if (isTreeEmpty(root))
    {
        printf("Tree is empty. Display not possible.\n");
    }
    else
    {
        printf("Tree Structure:\n");
        displayTree(root, 0);
    }
}

// void generateMirrorImage(Node **root) {
//     if (isTreeEmpty(*root)) {
//         printf("Tree is empty. Mirror image not possible.\n");
//     } else {
//         printf("Generating Mirror Image...\n");
//         mirror(*root);
//         printf("Mirror Image: \n");
//         displayTree(*root, 0);
//     }
// }

void countLevelsAndHeightMenu(Node *root)
{
    if (isTreeEmpty(root))
    {
        printf("Tree is empty. Height and level count not possible.\n");
    }
    else
    {
        printf("Tree Height: %d\n", height(root));
        int level;
        printf("Enter level to count nodes: ");
        if (scanf("%d", &level) != 1)
        {
            while (getchar() != '\n')
                ;
            printf("Invalid input. Please enter a valid number.\n");
            return;
        }
        printf("Nodes at level %d: %d\n", level, countNodesAtLevel(root, level));
    }
}

void mirror(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    else
    {

        Node *temp = node->left;
        node->left = node->right;
        node->right = temp;

        mirror(node->left);
        mirror(node->right);
    }
}

int main()
{
    Node *root = NULL;
    int choice;
    while (1)
    {
        printf("\nBinary Search Tree Operations:\n");
        printf("1. Insert a node\n");
        printf("2. Delete a node\n");
        printf("3. Search an element\n");
        printf("4. In-Order Traversal\n");
        printf("5. Pre-Order Traversal\n");
        printf("6. Post-Order Traversal\n");
        printf("7. Display Tree Structure\n");
        printf("8. Generate Mirror Image\n");
        printf("9. Count Levels and Height\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1)
        {
            while (getchar() != '\n')
                ;
            printf("Invalid input. Please enter a valid number.\n");
            continue;
        }

        switch (choice)
        {
        case 1:
            insertNodeMenu(&root);
            break;

        case 2:
            deleteNodeMenu(&root);
            break;

        case 3:
            searchElementMenu(root);
            break;

        case 4:
            inOrderTraversalMenu(root);
            break;

        case 5:
            preOrderTraversalMenu(root);
            break;

        case 6:
            postOrderTraversalMenu(root);
            break;

        case 7:
            displayTreeMenu(root);
            break;

            // case 8:
            //     generateMirrorImage(&root);
            //     break;

        case 8:
            mirror(root);
            break;

        case 9:
            countLevelsAndHeightMenu(root);
            break;

        case 10:
            printf("Exiting the program.\n");
            exit(0);

        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}
