# 🔍 Find the Partition Point using C

## 📖 Description

This project is a solution to **Question 5** of the **Design and Analysis of Algorithms (DAA) Lab**.

The program finds the **partition point** in a sorted binary array containing a sequence of **0s followed by 1s**. It uses the **Binary Search** algorithm to efficiently locate the first occurrence of `1`, which represents the transition point between the two runs.

## 🎯 Objective

- Find the exact transition point between 0s and 1s in a binary array.
- Implement an efficient Binary Search algorithm.
- Demonstrate the advantage of logarithmic-time searching over linear search.

## 📂 Project Structure

├── q5.c
├── q5.exe          (Generated after compilation)
└── README.md

## 📊 Algorithm Details

The program assumes that the input array contains:

- A sequence of **0s**
- Followed by a sequence of **1s**

Example:

```text
0 0 0 0 1 1 1 1
```

The program uses **Binary Search** to locate the first occurrence of `1`, which is the partition point.

If the array contains only `0`s, it reports that no partition point exists.

## ⚙️ Requirements

- GCC Compiler (MinGW GCC)
- Visual Studio Code (Recommended)
- C Standard Library

## 🚀 Compilation

```bash
gcc q5.c -o q5
```

## ▶️ Execution

### Windows

```bash
q5
```

### Linux

```bash
./q5
```

The program will:

1. Accept the size of the array.
2. Read the binary array (0s followed by 1s).
3. Find the partition point using Binary Search.
4. Display the index of the first occurrence of `1`.

## 📋 Sample Input

```text
Enter the size of array:
8

Enter elements:
0 0 0 0 1 1 1 1
```

## 📋 Sample Output

```text
Partition point is at index 4
First occurrence of 1 is 1
```

## 🛠 Technologies Used

- C Programming
- Binary Search
- Standard Input/Output

## 📚 Concepts Covered

- Binary Search
- Divide and Conquer
- Logarithmic Time Complexity (O(log n))
- Array Traversal
- Algorithm Analysis

## 👨‍💻 Author

**Tanishq**
B125134
B.Tech – Computer Science and Engineering
Design and Analysis of Algorithms (DAA) Lab

## 📄 License
This project is created for educational and academic purposes.
