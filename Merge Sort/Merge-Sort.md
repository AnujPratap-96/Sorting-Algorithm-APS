Here's a `README.md` file that explains the working of the Merge Sort code, along with a dry run and example.

---

# Merge Sort Implementation in C++

This C++ program implements **Merge Sort**, an efficient, comparison-based, divide-and-conquer sorting algorithm. Merge Sort works by recursively dividing the array into two halves, sorting each half, and then merging the sorted halves to produce the final sorted array.

## Code Explanation

### Components of the Program

1. **`Merge` Function**
   - Takes the array and the boundaries (`low`, `mid`, and `high`) of the two sorted subarrays as input.
   - Merges these two subarrays back into the original array while maintaining the sorted order.
   - The merge operation uses two temporary arrays (`left` and `right`) to store the elements of the two subarrays and then merges them back in sorted order.

2. **`MergeSort` Function**
   - Recursively divides the array into two halves until each subarray has only one element.
   - After dividing, the `Merge` function is called to merge the sorted subarrays.
   - The base case for recursion is when the array size becomes 1 (already sorted).

3. **Main Function**
   - Reads the size of the array and the array elements from the user.
   - Calls the `MergeSort` function to sort the array.
   - Prints the sorted array.

### Algorithm Steps

1. **Divide Step**:
   - Recursively split the array into two halves until you have subarrays of size 1. A subarray of size 1 is trivially sorted.

2. **Merge Step**:
   - Once the subarrays are sorted, merge them back together in sorted order.

### Time Complexity
- **Worst case**: O(n log n) — The array is recursively divided into two halves (`log n` times), and merging the halves takes linear time (`O(n)`).
- **Best case**: O(n log n) — Even if the array is already sorted, the algorithm still has to divide and merge the array.
- **Average case**: O(n log n).

### Space Complexity
- O(n) — The algorithm requires additional space for the temporary arrays during the merge process. 

## Dry Run

### Input

Let's consider an input array:  
`arr = [7, 3, 5, 2]`

### Step-by-Step Execution

1. **Initial array:** `[7, 3, 5, 2]`

2. **First Split:**
   - Split the array into two subarrays:
     - Left subarray: `[7, 3]`
     - Right subarray: `[5, 2]`

3. **Second Split:**
   - Split both subarrays:
     - `[7, 3]` → `[7]` and `[3]`
     - `[5, 2]` → `[5]` and `[2]`

4. **Merge Step:**
   - Merge `[7]` and `[3]`:
     - Compare `7` and `3`: `3` is smaller, so place `3` first.
     - Merged result: `[3, 7]`
   
   - Merge `[5]` and `[2]`:
     - Compare `5` and `2`: `2` is smaller, so place `2` first.
     - Merged result: `[2, 5]`

5. **Final Merge:**
   - Merge `[3, 7]` and `[2, 5]`:
     - Compare `3` and `2`: `2` is smaller, so place `2`.
     - Compare `3` and `5`: `3` is smaller, so place `3`.
     - Compare `7` and `5`: `5` is smaller, so place `5`.
     - Place `7` at the end.
     - Final merged array: `[2, 3, 5, 7]`

### Final sorted array: `[2, 3, 5, 7]`

## Example

### Input
```
Enter size of array: 4
Enter elements in the array: 7 3 5 2
```

### Output
```
Sorted array: 2 3 5 7
```

## How It Works

1. The user inputs the size of the array and the array elements.
2. The `MergeSort` function divides the array recursively into two halves.
3. The `Merge` function merges the sorted halves back into the original array.
4. The sorted array is printed as the output.

### Recursion and Efficiency

- **Merge Sort** is a divide-and-conquer algorithm. It works efficiently with large datasets because its time complexity is O(n log n) in all cases (best, worst, and average).
- The merging process requires additional space (O(n)), which makes Merge Sort a non-in-place sorting algorithm, unlike some other algorithms like Insertion Sort or Bubble Sort.

---

This `README.md` file provides a detailed explanation of how the Merge Sort code works, with an example and a dry run to clarify the process.