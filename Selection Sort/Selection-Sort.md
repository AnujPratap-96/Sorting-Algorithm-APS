Here's a `README.md` file that explains the working of the Selection Sort code, along with a dry run and example.

---

# Selection Sort Implementation in C++

This C++ program implements **Selection Sort**, a simple comparison-based sorting algorithm. Selection Sort works by repeatedly selecting the minimum element from the unsorted portion of the array and swapping it with the first unsorted element.

## Code Explanation

### Components of the Program

1. **`SelectionSort` Function**
   - This function sorts the input vector using the Selection Sort algorithm.
   - It iterates through the array, and for each position, it finds the smallest element in the remaining unsorted portion of the array.
   - The smallest element is then swapped with the current position, effectively growing the sorted portion of the array.

2. **Main Function**
   - Reads the size of the array and the array elements from the user.
   - Calls the `SelectionSort` function to sort the array.
   - Prints the sorted array.

### Algorithm Steps

1. **Iterate through the array**:
   - For each index `i`, assume that the minimum element is at index `i`.

2. **Find the minimum**:
   - Iterate through the remaining elements (from `i+1` to the end of the array) to find the index of the minimum element.

3. **Swap**:
   - Swap the minimum element found with the element at index `i`.

4. **Repeat**:
   - Continue the process until the array is sorted.

### Time Complexity
- **Worst case**: O(n²) — The algorithm always requires O(n) comparisons for each of the n elements.
- **Average case**: O(n²) — Same as the worst case; the number of comparisons does not change.
- **Best case**: O(n²) — Even if the array is already sorted, the algorithm still compares each element.

### Space Complexity
- **O(1)** — Selection Sort is an in-place sorting algorithm, meaning it requires a constant amount of extra space aside from the input array itself.

## Dry Run

### Input

Consider the input array:  
`arr = [64, 25, 12, 22, 11]`

### Step-by-Step Execution

1. **Initial array:** `[64, 25, 12, 22, 11]`

2. **First Pass (`i = 0`)**:
   - Assume the minimum is at index `0` (value `64`).
   - Compare with `25`, `12`, `22`, and `11`. 
   - Minimum found at index `4` (value `11`).
   - Swap `64` and `11`.
   - Array after first pass: `[11, 25, 12, 22, 64]`

3. **Second Pass (`i = 1`)**:
   - Assume the minimum is at index `1` (value `25`).
   - Compare with `12`, `22`, and `64`.
   - Minimum found at index `2` (value `12`).
   - Swap `25` and `12`.
   - Array after second pass: `[11, 12, 25, 22, 64]`

4. **Third Pass (`i = 2`)**:
   - Assume the minimum is at index `2` (value `25`).
   - Compare with `22` and `64`.
   - Minimum found at index `3` (value `22`).
   - Swap `25` and `22`.
   - Array after third pass: `[11, 12, 22, 25, 64]`

5. **Fourth Pass (`i = 3`)**:
   - Assume the minimum is at index `3` (value `25`).
   - Compare with `64`.
   - Minimum remains at index `3` (value `25`).
   - No swap needed.
   - Array after fourth pass: `[11, 12, 22, 25, 64]`

6. **Final sorted array:** `[11, 12, 22, 25, 64]`

## Example

### Input
```
Enter the size of array: 5
Enter elements in the array: 64 25 12 22 11
```

### Output
```
Sorted array: 11 12 22 25 64
```

## How It Works

1. The user inputs the size of the array and the array elements.
2. The `SelectionSort` function sorts the array by repeatedly selecting the minimum element from the unsorted portion and swapping it into place.
3. The sorted array is printed as the output.

### Characteristics of Selection Sort

- **Simple to understand and implement**.
- **Not adaptive**: It always makes the same number of comparisons regardless of the state of the array.
- **Not stable**: Equal elements may not maintain their relative order after sorting.

---

This `README.md` file provides a comprehensive explanation of how the Selection Sort code works, with an example and a dry run to illustrate the steps of the algorithm.