//? Quick Sort :: Pick a pivot element and place it on its correct position in the sorted array.
//* Time Complexity -> O(N logN ) for best and average case.
//? O( N^2 ) for worst cases.
//! Space Complexity -> O(1).

#include <bits/stdc++.h>

using namespace std;

// Function to find the median of three elements
int medianOfThree(vector<int>& arr, int low, int high) {
    int mid = low + (high - low) / 2;
    if (arr[low] > arr[mid])
        swap(arr[low], arr[mid]);
    if (arr[low] > arr[high])
        swap(arr[low], arr[high]);
    if (arr[mid] > arr[high])
        swap(arr[mid], arr[high]);
    return mid;
}

// Function to partition the array around the pivot
int partition(vector<int>& arr, int low, int high) {
    int pivotIndex = medianOfThree(arr, low, high);
    int pivot = arr[pivotIndex];
    swap(arr[pivotIndex], arr[low]);  // Move pivot to start of the array
    
    int i = low + 1;
    int j = high;
    
    while (i <= j) {
        while (i <= high && arr[i] <= pivot) i++;
        while (arr[j] > pivot) j--;
        if (i < j) swap(arr[i], arr[j]);
    }
    
    swap(arr[j], arr[low]);
    return j;  // Return the index of the pivot
}

// Function to perform Quick Sort on the array
void QuickSort(vector<int>& arr, int low, int high) {
    while (low < high) {
        int pIndex = partition(arr, low, high);
        // Recursively sort the smaller partition
        if (pIndex - low < high - pIndex) {
            QuickSort(arr, low, pIndex - 1);
            low = pIndex + 1;
        } else {
            QuickSort(arr, pIndex + 1, high);
            high = pIndex - 1;
        }
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Perform Quick Sort
    QuickSort(arr, 0, n - 1);
    
    // Print the sorted array
    cout << "Sorted array: ";
    for (const int& elem : arr) {
        cout << elem << " ";
    }
    
    return 0;
}
