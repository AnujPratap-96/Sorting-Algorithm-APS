Here's a `README.md` file that explains the working of the Quick Sort code, along with a dry run and example.

---

# Quick Sort Implementation in C++

This C++ program implements **Quick Sort**, an efficient, comparison-based, divide-and-conquer sorting algorithm. Quick Sort works by selecting a pivot element and partitioning the array around the pivot, ensuring that elements smaller than the pivot are on one side and larger elements are on the other. It then recursively sorts the two partitions.

## Code Explanation

### Components of the Program

1. **`medianOfThree` Function**
   - This function improves Quick Sort's performance by selecting the pivot as the median of three elements: the first, middle, and last element of the current subarray. This helps to avoid worst-case scenarios, particularly when the input array is nearly sorted.

2. **`partition` Function**
   - This function partitions the array around the pivot element. Elements smaller than the pivot are moved to the left, and elements larger than the pivot are moved to the right.
   - The pivot is then placed in its correct position in the sorted array.
   - The function returns the index of the pivot after partitioning.

3. **`QuickSort` Function**
   - Recursively sorts the array by selecting a pivot, partitioning the array around the pivot, and then sorting the left and right partitions.
   - Instead of using full recursion, it tail-recursively sorts the smaller partition, reducing stack space requirements.

4. **Main Function**
   - Reads the size of the array and the array elements from the user.
   - Calls the `QuickSort` function to sort the array.
   - Prints the sorted array.

### Algorithm Steps

1. **Pivot Selection**:
   - A pivot element is selected using the `medianOfThree` function, which ensures better performance by choosing the median of the first, middle, and last element of the subarray.

2. **Partitioning**:
   - The `partition` function places the pivot in its correct position by moving smaller elements to the left and larger elements to the right.
   - It returns the pivot index, which is then used to recursively sort the left and right subarrays.

3. **Recursive Sorting**:
   - The array is recursively divided into smaller partitions until all elements are sorted.

### Time Complexity
- **Best case**: O(n log n) — Occurs when the pivot splits the array into two balanced parts.
- **Average case**: O(n log n) — Expected performance when using the median-of-three pivot selection.
- **Worst case**: O(n²) — Occurs when the pivot is consistently the smallest or largest element (e.g., when the array is already sorted and no optimization like median-of-three is applied).

### Space Complexity
- **O(1)** — Quick Sort is an in-place sorting algorithm, meaning it requires a constant amount of extra memory aside from the input array itself.
- Although recursive, tail-recursive sorting of smaller partitions reduces the stack space usage.

## Dry Run

### Input

Consider the input array:  
`arr = [7, 2, 5, 1, 3]`

### Step-by-Step Execution

1. **Initial array:** `[7, 2, 5, 1, 3]`

2. **First Pivot Selection (median of three):**
   - Median of `7, 5, 3` → `5`
   - Pivot selected: `5`
   - After partitioning: `[3, 2, 1, 5, 7]`
   - Pivot `5` is now at index `3`.

3. **Recursively Sort Left Subarray `[3, 2, 1]`:**
   - Pivot selected: `2` (median of three: `3, 2, 1`)
   - After partitioning: `[1, 2, 3, 5, 7]`
   - Pivot `2` is now at index `1`.

4. **Right Subarray `[7]` is already sorted.**

5. **Final Sorted Array:** `[1, 2, 3, 5, 7]`

## Example

### Input
```
Enter size of array: 5
Enter elements in the array: 7 2 5 1 3
```

### Output
```
Sorted array: 1 2 3 5 7
```

## How It Works

1. The user inputs the size of the array and the array elements.
2. The `QuickSort` function sorts the array by recursively dividing and conquering using the `partition` and `medianOfThree` functions.
3. The sorted array is printed as the output.

### Quick Sort Features and Optimization

- **Median-of-three** pivot selection helps to avoid worst-case performance (O(n²)) by ensuring that the pivot is more likely to split the array into balanced halves.
- Tail-recursive optimization is used to minimize the stack space used during recursion.

---

This `README.md` file provides a clear explanation of how the Quick Sort code works, with an example and a dry run to illustrate the steps of the algorithm.