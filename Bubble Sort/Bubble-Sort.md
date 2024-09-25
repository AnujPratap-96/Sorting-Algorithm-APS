Here's a `README.md` file that explains the working of the Bubble Sort code, along with a dry run and example.


# Bubble Sort Implementation in C++

This C++ program sorts an array using the **Bubble Sort** algorithm. Bubble Sort is a simple comparison-based sorting algorithm where the largest element "bubbles" up to its correct position in each iteration by adjacent swapping of elements. 

## Code Explanation

### Components of the Program

1. **`BubbleSort` Function**
   - Takes a vector (`arr`) as input and sorts it in ascending order.
   - The algorithm works by repeatedly iterating over the array and swapping adjacent elements if they are in the wrong order.
   - After each pass, the largest unsorted element is pushed to its correct position.
   - If the array is already sorted, the algorithm stops early.

2. **Main Function**
   - Reads the size of the array and the array elements from the user.
   - Calls the `BubbleSort` function.
   - Prints the sorted array.

### Algorithm Steps

1. Loop through the array from the last index to the first. The idea is that after each pass, the largest element of the remaining unsorted part will be placed in its correct position.
   
2. For each pass through the array:
   - Compare adjacent elements.
   - If an element is greater than the next element, swap them.
   - Track whether any swaps were made; if no swaps were made, the array is already sorted, and the loop can be terminated early (optimization).

### Time Complexity
- **Worst case**: O(n²) — occurs when the array is sorted in reverse order.
- **Best case**: O(n) — occurs when the array is already sorted. The algorithm terminates early due to the `isSorted` flag.
- **Average case**: O(n²).

### Space Complexity
- O(1) — as it only uses a constant amount of extra memory, regardless of the size of the input array.

## Dry Run

### Input

Let's consider an input array:  
`arr = [5, 2, 9, 1, 5, 6]`

### Step-by-Step Execution

1. **Initial array:** `[5, 2, 9, 1, 5, 6]`
   - First pass:
     - Compare `5` and `2`: Swap → `[2, 5, 9, 1, 5, 6]`
     - Compare `5` and `9`: No swap
     - Compare `9` and `1`: Swap → `[2, 5, 1, 9, 5, 6]`
     - Compare `9` and `5`: Swap → `[2, 5, 1, 5, 9, 6]`
     - Compare `9` and `6`: Swap → `[2, 5, 1, 5, 6, 9]`
   - Largest element `9` is now in its correct position.

2. **Second pass:** `[2, 5, 1, 5, 6, 9]`
   - Compare `2` and `5`: No swap
   - Compare `5` and `1`: Swap → `[2, 1, 5, 5, 6, 9]`
   - Compare `5` and `5`: No swap
   - Compare `5` and `6`: No swap
   - Array is still not sorted, proceed to the next pass.

3. **Third pass:** `[2, 1, 5, 5, 6, 9]`
   - Compare `2` and `1`: Swap → `[1, 2, 5, 5, 6, 9]`
   - Compare `2` and `5`: No swap
   - Compare `5` and `5`: No swap
   - No further swaps needed, array is now sorted.

### Final sorted array: `[1, 2, 5, 5, 6, 9]`

## Example

### Input
```
Enter the size of array: 6
Enter elements in the array: 5 2 9 1 5 6
```

### Output
```
Sorted array: 1 2 5 5 6 9
```

## How It Works

1. The user inputs the size of the array and its elements.
2. The `BubbleSort` function processes the array by swapping adjacent elements in multiple passes.
3. The sorted array is printed as the output.

### Optimization

- The `isSorted` flag helps to break out of the loop early if no swaps are needed during a pass, reducing unnecessary comparisons when the array becomes sorted before completing all passes.

---
This `README.md` file provides a detailed explanation of how the Bubble Sort code works, with an example and a dry run to clarify the process.