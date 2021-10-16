#include <stdio.h>

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    // Swap arr[low] and arr[j]
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void quickSort(int arr[], int low, int high, int n)
{
    int partitionIndex; // Index of Pivot after partition

    if (low < high)
    {
        partitionIndex = partition(arr, low, high);
        // printArray(arr, n);
        quickSort(arr, low, partitionIndex - 1, n);  // sort left subarray
        quickSort(arr, partitionIndex + 1, high, n); // sort right subarray
    }
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before sorting ");
    printArray(arr, n);
    printf("Sorting by Quick Sort\n");
    quickSort(arr, 0, n - 1, n);
    printf("After sorting by Quick Sort ");
    printArray(arr, n);

    return 0;
}