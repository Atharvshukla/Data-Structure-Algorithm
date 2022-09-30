
#include <iostream>
using namespace std;

int partition(int arr[], int startIndex, int endIndex)
{
    int pivot = arr[startIndex];

    int count = 0;
    for (int i = startIndex + 1; i <= endIndex; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // now place the pivot at its right place
    int pivotIndex = startIndex + count;
    swap(arr[pivotIndex], arr[startIndex]);

    // now lets handel the right and left part
    int i = startIndex;
    int j = endIndex;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int startIndex, int endIndex)
{
    // base case
    if (startIndex >= endIndex)
        return;    
        // partition
        int p = partition(arr, startIndex, endIndex);

        // left part sorting
        quickSort(arr, startIndex, p - 1);

        // right part sorting
        quickSort(arr, p + 1, endIndex);
    
}

int main()
{
    int arr[5] = {2, 6, 1, 7, 4};
    int n = 5;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}