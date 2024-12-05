#include <stdio.h>
int main()
{
    int arr[20], n, key, i;
    printf("\nEnter the number of elements: ");
    scanf("%d", &n);
    printf("\nEnter %d elements: n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the element to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("\n%d found at position %d\n", key, i + 1);
            break;
        }
    }
    if (i == n)
    {
        printf("\n%d not found in array\n", key);
    }
    return 0;
}

// #include <stdio.h>

// int linearSearch(int arr[], int n, int target)
// {
//     int i;
//     for (i = 0; i < n; i++)
//     {
//         if (arr[i] == target)
//         {
//             return i; // Element found at index i
//         }
//     }
//     return -1; // Element not found
// }

// int main()
// {
//     int arr[] = {10, 2, 8, 5, 17};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int target = 8;
//     int result = linearSearch(arr, n, target);
//     if (result == -1)
//     {
//         printf("Element not found in the array.\n");
//     }
//     else
//     {
//         printf("Element found at index: %d\n", result);
//     }
//     return 0;
// }