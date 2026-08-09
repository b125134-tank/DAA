# DAA Lab – Dictionary Operations

## 📌 Overview

This project implements and analyzes **Dictionary Operations** using different data structures.

The following data structures are considered:

- Sorted Array
- Unsorted Array
- Singly Linked List – Sorted
- Singly Linked List – Unsorted
- Doubly Linked List – Sorted
- Doubly Linked List – Unsorted

The following dictionary operations are analyzed:

- Search
- Insert
- Delete
- Maximum
- Minimum
- Predecessor
- Successor

The programs generate `.txt` files containing operation-growth data, which can be plotted using **Gnuplot**.

---

## 📂 Files in the Repository

| File | Description |
|--------|------------|
| `sorted_array.c` | C program for sorted array complexity analysis |
| `unsorted_array.c` | C program for unsorted array complexity analysis |
| `singlySorted_list.c` | C program for sorted singly linked list |
| `singlyUnsorted_list.c` | C program for unsorted singly linked list |
| `doublySorted_list.c` | C program for sorted doubly linked list |
| `doublyUnsorted_list.c` | C program for unsorted doubly linked list |
| `*.txt` | Generated complexity data files |
| `*.gnu` | Gnuplot scripts |
| `README.md` | Project documentation |

---

# 📊 Dictionary Operations

| Operation | Description |
|------------|------------|
| Search | Find a key |
| Insert | Add a key |
| Delete | Remove a key |
| Maximum | Find the largest key |
| Minimum | Find the smallest key |
| Predecessor | Largest key smaller than a given key |
| Successor | Smallest key larger than a given key |

---

# ⏱️ Time Complexity Analysis

## 1. Sorted Array

| Operation | Complexity |
|------------|------------|
| Search | O(log n) |
| Insert | O(n) |
| Delete | O(n) |
| Maximum | O(1) |
| Minimum | O(1) |
| Predecessor | O(log n) |
| Successor | O(log n) |

---

## 2. Unsorted Array

| Operation | Complexity |
|------------|------------|
| Search | O(n) |
| Insert | O(1) |
| Delete | O(1) |
| Maximum | O(n) |
| Minimum | O(n) |
| Predecessor | O(n) |
| Successor | O(n) |

---

## 3. Singly Sorted Linked List

| Operation | Complexity |
|------------|------------|
| Search | O(n) |
| Insert | O(n) |
| Delete | O(n) |
| Maximum | O(n) |
| Minimum | O(1) |
| Predecessor | O(n) |
| Successor | O(n) |

---

## 4. Singly Unsorted Linked List

| Operation | Complexity |
|------------|------------|
| Search | O(n) |
| Insert | O(1) |
| Delete | O(1) |
| Maximum | O(n) |
| Minimum | O(n) |
| Predecessor | O(n) |
| Successor | O(n) |

---

## 5. Doubly Sorted Linked List

| Operation | Complexity |
|------------|------------|
| Search | O(n) |
| Insert | O(n) |
| Delete | O(n) |
| Maximum | O(1) |
| Minimum | O(1) |
| Predecessor | O(1) |
| Successor | O(1) |

---

## 6. Doubly Unsorted Linked List

| Operation | Complexity |
|------------|------------|
| Search | O(n) |
| Insert | O(1) |
| Delete | O(1) |
| Maximum | O(n) |
| Minimum | O(n) |
| Predecessor | O(n) |
| Successor | O(n) |

---

# 📋 Overall Comparison

| Data Structure | Search | Insert | Delete | Maximum | Minimum | Predecessor | Successor |
|---------------|--------|--------|--------|--------|--------|------------|-----------|
| Sorted Array | O(log n) | O(n) | O(n) | O(1) | O(1) | O(log n) | O(log n) |
| Unsorted Array | O(n) | O(1) | O(1) | O(n) | O(n) | O(n) | O(n) |
| Singly Sorted List | O(n) | O(n) | O(n) | O(n) | O(1) | O(n) | O(n) |
| Singly Unsorted List | O(n) | O(1) | O(1) | O(n) | O(n) | O(n) | O(n) |
| Doubly Sorted List | O(n) | O(n) | O(n) | O(1) | O(1) | O(1) | O(1) |
| Doubly Unsorted List | O(n) | O(1) | O(1) | O(n) | O(n) | O(n) | O(n) |

---

# 📈 Data Generation

Each program generates a text file in the format:

```text
n Search Insert Delete Maximum Minimum Predecessor Successor
```

These files contain values for different input sizes and are used for graph plotting.

---

# 📈 Graph Generation Using Gnuplot

Run the corresponding `.gnu` file:

```gnuplot
load "sorted_array.gnu"
```

Similarly:

```gnuplot
load "unsorted_array.gnu"
load "singlySorted_list.gnu"
load "singlyUnsorted_list.gnu"
load "doublySorted_list.gnu"
load "doublyUnsorted_list.gnu"
```

Graphs visualize the growth of dictionary operations with increasing input size.

---

# 🛠️ Technologies Used

- C Programming Language
- GCC Compiler
- Gnuplot
- Visual Studio Code
- Git
- GitHub

---

# ▶️ How to Run

### Compile

```bash
gcc sorted_array.c -o sorted_array
```

```bash
gcc unsorted_array.c -o unsorted_array
```

### Execute

Windows:

```bash
sorted_array.exe
```

Linux/macOS:

```bash
./sorted_array
```

### Generate Graph

```gnuplot
load "sorted_array.gnu"
```

---

# 🎯 Objectives

1. Study dictionary operations.
2. Implement different data structures.
3. Compare their time complexities.
4. Generate experimental data.
5. Visualize growth using Gnuplot.
6. Analyze performance differences among data structures.

---

# 📌 Conclusion

Different data structures offer different trade-offs.

- Sorted arrays provide efficient searching.
- Unsorted arrays provide fast insertion.
- Linked lists allow flexible memory usage.
- Doubly linked lists provide direct predecessor and successor access.
- Graphs help visualize the growth of operations and compare performance.

---

## 👨‍💻 Author
Tanishq 
B125134

**DAA Lab Project**
**Course:** Design and Analysis of Algorithms (DAA)
**Language:** C
**Tools:** GCC, Gnuplot, VS Code, GitHub