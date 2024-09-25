//? Insertion Sort :: Takes the element and place it on its correct index in the array.
//* Time Complexity -> O(n^2) for worst and average case.
//? O(n) for best case.
//! Space Complexity :: O(1).

#include <iostream>
#include <vector>

using namespace std;

// Function to perform Insertion Sort on the vector
void InsertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Move elements of arr[0..i-1] that are greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        // Place key at its correct position
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter elements in the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    InsertionSort(arr);
    
    cout << "Sorted array: ";
    for (const int& elem : arr) {
        cout << elem << " ";
    }
    
    return 0;
}
