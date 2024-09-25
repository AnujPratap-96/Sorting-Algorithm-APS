//? Bubble Sort :: Push the maximum element to the last by adjacent swapping .
//* Time Complexity -> O(n^2) for average and worst case .
//? O(n) for the best case. 
//! Space Complexity -> O(1).


#include <iostream>
#include <vector>

using namespace std;

void BubbleSort(vector<int>& arr) {
    bool isSorted;
    int n = arr.size();
    
    for (int i = n - 1; i >= 0; i--) {
        isSorted = true;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isSorted = false;
            }
        }
        if (isSorted) return;
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
    
    BubbleSort(arr);
    
    cout << "Sorted array: ";
    for (const int& elem : arr) {
        cout << elem << " ";
    }
    
    return 0;
}
