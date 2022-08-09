// Quicksort
// Complexity : 
// Worst Case: O(n^2)
// Best Case: O(n * log(n))

#include <iostream>
#include <vector>

using namespace std;

int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int pIndex = start;
    for(int i = start; i < end; i++) {
        if(arr[i] <= pivot) {
            swap(arr[i], arr[pIndex]);
            pIndex++;
        }
    }
    swap(arr[pIndex], arr[end]);
    return pIndex;
}

void quicksort(int arr[], int start, int end) {
    if(start >= end) {
        return;
    }

    int pivot = partition(arr, start, end);
    quicksort(arr, start, pivot - 1);
    quicksort(arr, pivot + 1, end);
}

int main()
{
    int arr[] = {5, 3, 2, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}