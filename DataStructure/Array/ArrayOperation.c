#include <stdio.h>
#include <stdlib.h>

int a[20], a2[20];
int n, val, i, pos, key, temp, m, k, count = 1;

void create();
void display();
void insert();
void deleteElement();
void search();
void arraySort();
void sum();
void reverse();
void merge();
void kthLargestNumber();
void kthSmallestNumber();

int main()
{
    int choice = 1;
    while (choice)
    {
        printf("\n-- -- -Array Operation-- -- --\n");
        printf("1. Create an array\n");
        printf("2. Display the array\n");
        printf("3. Insert an element in an array\n");
        printf("4. Delete an element from an array\n");
        printf("5. Search an element of an array\n");
        printf("6. Sort all the elements of an array\n");
        printf("7. Sum & average of all the elements of an array\n");
        printf("8. Reverse all elements of an array\n");
        printf("9. Merge new array into old array\n");
        printf("10. kth largest number in an array\n");
        printf("11. kth smallest number in an array\n");
        printf("12. EXIT\n");
        printf("-----------\n");
        printf("ENTER YOUR CHOICE:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            deleteElement();
            break;
        case 5:
            search();
            break;
        case 6:
            arraySort();
            break;
        case 7:
            sum();
            break;
        case 8:
            reverse();
            break;
        case 9:
            merge();
            break;
        case 10:
            kthLargestNumber();
            break;
        case 11:
            kthSmallestNumber();
            break;
        case 12:
            exit(0);
        default:
            printf("\nInvalid choice :\n");
            break;
        }
    }
    return 0;
}

void create()
{
    printf("\nEnter the size of the array elements:");
    scanf("%d", &n);
    printf("\nEnter the elements for the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void display()
{
    printf("\nThe array elements are:");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void insert()
{
    printf("\nEnter the position for the new element:\t");
    scanf("%d", &pos);
    printf("\nEnter the element to be inserted:");
    scanf("%d", &val);
    for (i = n - 1; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos] = val;
    n++;
}

void deleteElement()
{
    printf("\nEnter the position of the element to be deleted:");
    scanf("%d", &pos);
    val = a[pos];
    for (i = pos; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    printf("\nThe deleted element is = %d", val);
}

void search()
{
    printf("Enter the key you want to search in an array :");
    scanf("%d", &key);
    int flag = -1;
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = i;
            break;
        }
    }
    if (flag >= 0)
    {
        printf("%d is found at %d  ", key, flag);
    }
    else
    {
        printf("%d is not found in array", key);
    }
}

void arraySort()
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Array is sorted\n");
}

void sum()
{
    int sum = 0;
    float avg = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    avg = (float)sum / n;

    printf("Sum of all elements of an array is %d\nAverage of all elements of an array is %f\n", sum, avg);
}

void reverse()
{
    for (i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("Array is reversed\n");
}

void merge()
{
    printf("How many elements you want to insert in the new array: ");
    scanf("%d", &m);

    printf("\nEnter elements for the second array:\n");
    for (i = 0; i < m; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a2[i]);
    }

    for (i = 0; i < m + n; i++)
    {
        if (i < n)
            a[i] = a[i];
        else
            a[i] = a2[i - n];
    }

    n = n + m;
    printf("Two arrays are merged\n");
}

void kthLargestNumber()
{
    arraySort();
    printf("Enter k to find the kth largest number: ");
    scanf("%d", &k);
    if (k >= 1 && k <= n)
    {
        printf("%dth largest number is %d\n", k, a[n - k]);
    }
    else
    {
        printf("Invalid value of k\n");
    }
}

void kthSmallestNumber()
{
    arraySort();
    printf("Enter k to find the kth smallest number: ");
    scanf("%d", &k);
    if (k >= 1 && k <= n)
    {
        printf("%dth smallest number is %d\n", k, a[k - 1]);
    }
    else
    {
        printf("Invalid value of k\n");
    }
}
