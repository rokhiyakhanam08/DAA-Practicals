#include <stdio.h>

void maxHeapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    
    if (right < n && arr[right] > arr[largest])
        largest = right;

   
        
    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

       
        maxHeapify(arr, n, largest);
    }
}


void maxHeapSort(int arr[], int n)
{
    
    for (int i = n / 2 - 1; i >= 0; i--)
        maxHeapify(arr, n, i);

    
    for (int i = n - 1; i > 0; i--)
    {
      
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Restore Max Heap
        maxHeapify(arr, i, 0);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Original Array: ");
    display(arr, n);

    maxHeapSort(arr, n);

    printf("Sorted Array: ");
    display(arr, n);

    return 0;
}