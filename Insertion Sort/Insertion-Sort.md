Here's a `README.md` file that explains the working of the Insertion Sort code, along with a dry run and example.

---

# Insertion Sort Implementation in C++

This C++ program implements **Insertion Sort**, a comparison-based sorting algorithm. Insertion Sort works by dividing the array into a sorted and unsorted part, then taking elements from the unsorted part and inserting them into the correct position within the sorted part.

## Code Explanation

### Components of the Program

1. **`InsertionSort` Function**
   - Takes a vector (`arr`) as input and sorts it in ascending order.
   - The algorithm iterates through the array and for each element, it inserts it into the correct position in the sorted portion of the array by shifting larger elements to the right.
   - This process repeats for all elements.

2. **Main Function**
   - Reads the size of the array and the array elements from the user.
   - Calls the `InsertionSort` function.
   - Prints the sorted array.

### Algorithm Steps

1. Loop through the array starting from the second element (i.e., index `1`) because the first element is already considered sorted.
   
2. For each element:
   - Save the current element (the "key") and compare it with elements to its left (already sorted part).
   - Shift the larger elements to the right to make space for the key.
   - Insert the key at the correct position.

### Time Complexity
- **Worst case**: O(n²) — occurs when the array is sorted in reverse order. Each element must be compared to all previous elements.
- **Best case**: O(n) — occurs when the array is already sorted. In this case, no shifting is needed, and the algorithm just traverses the array.
- **Average case**: O(n²).

### Space Complexity
- O(1) — as it only uses a constant amount of extra memory (just the `key` variable), regardless of the size of the input array.

## Dry Run

### Input

Let's consider an input array:  
`arr = [7, 2, 4, 1, 5]`

### Step-by-Step Execution

1. **Initial array:** `[7, 2, 4, 1, 5]`

2. **First Pass (i = 1):**
   - `key = 2`
   - Compare `7` and `2`: Shift `7` to the right → `[7, 7, 4, 1, 5]`
   - Insert `2` in the correct position → `[2, 7, 4, 1, 5]`

3. **Second Pass (i = 2):**
   - `key = 4`
   - Compare `7` and `4`: Shift `7` to the right → `[2, 7, 7, 1, 5]`
   - Insert `4` in the correct position → `[2, 4, 7, 1, 5]`

4. **Third Pass (i = 3):**
   - `key = 1`
   - Compare `7` and `1`: Shift `7` to the right → `[2, 4, 7, 7, 5]`
   - Compare `4` and `1`: Shift `4` to the right → `[2, 4, 4, 7, 5]`
   - Compare `2` and `1`: Shift `2` to the right → `[2, 2, 4, 7, 5]`
   - Insert `1` in the correct position → `[1, 2, 4, 7, 5]`

5. **Fourth Pass (i = 4):**
   - `key = 5`
   - Compare `7` and `5`: Shift `7` to the right → `[1, 2, 4, 7, 7]`
   - Insert `5` in the correct position → `[1, 2, 4, 5, 7]`

### Final sorted array: `[1, 2, 4, 5, 7]`

## Example

### Input
```
Enter the size of array: 5
Enter elements in the array: 7 2 4 1 5
```

### Output
```
Sorted array: 1 2 4 5 7
```

## How It Works

1. The user inputs the size of the array and the array elements.
2. The `InsertionSort` function processes the array by inserting each element into its correct position within the sorted portion of the array.
3. The sorted array is printed as the output.

### Optimization

- Insertion Sort is adaptive; it performs efficiently (O(n)) if the input array is nearly sorted.

---

This `README.md` file provides a detailed explanation of how the Insertion Sort code works, with an example and a dry run to clarify the process.

