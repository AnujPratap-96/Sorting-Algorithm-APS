# 🚀 C++ Sorting Algorithms

Welcome to the **C++ Sorting Algorithms** repository! This project contains the implementation of various popular sorting algorithms in C++. Sorting is a fundamental operation in computer science, and these algorithms demonstrate different techniques and efficiencies.

## ✨ Sorting Algorithms Included

1. **Selection Sort**: A simple comparison-based sorting algorithm.
2. **Bubble Sort**: A basic sorting algorithm that repeatedly steps through the list and swaps adjacent elements.
3. **Insertion Sort**: Efficient for small datasets, it builds the sorted array one element at a time.
4. **Quick Sort**: A highly efficient, divide-and-conquer sorting algorithm with a recursive approach.
5. **Merge Sort**: Another divide-and-conquer algorithm that splits the array into halves and merges them in sorted order.

## 🛠 Tech Stack

- **Language**: C++
- **Standard Libraries**: `<iostream>`, `<vector>`

## 🔧 How to Run the Code

### 1. Clone the Repository

```bash
git clone https://github.com/AnujPratap-96/sorting-algorithms.git
cd sorting-algorithms
```

### 2. Compile and Run the Code

For each algorithm, the C++ file can be compiled using the following command in a terminal or command prompt:

```bash
g++ selection_sort.cpp -o selection_sort
./selection_sort
```

Similarly, replace `selection_sort` with `bubble_sort`, `insertion_sort`, `quick_sort`, or `merge_sort` for other algorithms.

## 📂 Folder Structure

```
sorting-algorithms/
├── bubble_sort/
│   ├── bubble_sort.cpp
│   └── Bubble-Sort.md
├── insertion_sort/
│   ├── insertion_sort.cpp
│   └── Insertion-Sort.md
├── merge_sort/
│   ├── merge_sort.cpp
│   └── Merge-Sort.md
├── quick_sort/
│   ├── quick_sort.cpp
│   └── Quick-Sort.md
└── selection_sort/
    ├── selection_sort.cpp
    └── Selection-Sort.md

```

## 🧠 Understanding Each Algorithm

1. **Selection Sort**:
   - Complexity: O(n²)
   - Finds the minimum element from the unsorted part and swaps it with the beginning element.

2. **Bubble Sort**:
   - Complexity: O(n²)
   - Repeatedly compares and swaps adjacent elements if they are in the wrong order.

3. **Insertion Sort**:
   - Complexity: O(n²)
   - Builds the sorted array by picking elements and placing them in the correct position.

4. **Quick Sort**:
   - Complexity: O(n log n) on average, O(n²) in the worst case
   - Picks a pivot element and partitions the array into elements less than and greater than the pivot.

5. **Merge Sort**:
   - Complexity: O(n log n)
   - Divides the array into halves and merges them in sorted order.

## 🤝 Contributing

Feel free to contribute to this repository! If you have any improvements or additional algorithms to add, follow these steps:

1. Fork the repository.
2. Create a feature branch (`git checkout -b feature/your-feature`).
3. Commit your changes (`git commit -m 'Add your feature'`).
4. Push to the branch (`git push origin feature/your-feature`).
5. Open a pull request.

## 🛡 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

Enjoy exploring and learning about sorting algorithms! 📚✨

--- 
