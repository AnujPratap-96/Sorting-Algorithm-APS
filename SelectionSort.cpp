//? Selection Sort :: Select the minimum and swap.
//* Time Complexity -> O( N^2 ) for all cases.
//! Space Complexity --> O(1).


#include <iostream>
#include <vector>

using namespace std;

// Function to perform Selection Sort on the vector
void SelectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        // Assume the minimum element is at the current index
        int mini = i;
        
        // Find the minimum element in the remaining unsorted portion
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        
        // Swap the found minimum element with the element at the current index
        swap(arr[i], arr[mini]);
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
    
    // Perform Selection Sort
    SelectionSort(arr);
    
    // Print the sorted array
    cout << "Sorted array: ";
    for (const int& elem : arr) {
        cout << elem << " ";
    }
    
    return 0;
}
