# 🔍 Element Uniqueness using C

## 📖 Description

This project is a solution to **Question 6** of the **Design and Analysis of Algorithms (DAA) Lab**.

The program generates **n random integers** and checks whether all the elements in the array are unique. It uses a simple comparison-based approach to detect duplicate elements and reports whether duplicates are present.

## 🎯 Objective

- Generate a sequence of random numbers.
- Check whether all elements in the array are unique.
- Detect duplicate elements using a comparison-based algorithm.
- Analyze the performance of the uniqueness-checking method for different input sizes.


## 📂 Project Structure

├── q6.c
├── q6.exe          (Generated after compilation)
└── README.md

## 📊 Algorithm Details

The program performs the following steps:

1. Accepts the number of elements (`n`) from the user.
2. Generates `n` random integers.
3. Stores the numbers in an array.
4. Compares every pair of elements to check for duplicates.
5. Displays whether all elements are unique or duplicate elements are found.

## ⚙️ Requirements

- GCC Compiler (MinGW GCC)
- Visual Studio Code (Recommended)
- C Standard Library
- `time.h`

## 🚀 Compilation

```bash
gcc q6.c -o q6
```

## ▶️ Execution

### Windows

```bash
q6
```

### Linux

```bash
./q6
```

The program will:

1. Ask for the number of elements.
2. Generate random integers.
3. Display the generated array.
4. Check whether duplicate elements exist.
5. Display the final result.

## 📋 Sample Input

```text
Enter the number of elements:
10
```

## 📋 Sample Output

```text
Generated Random Numbers:
45 12 87 23 56 45 78 90 11 34

Duplicate elements found.
```
or
```text
Generated Random Numbers:
45 12 87 23 56 71 78 90 11 34

All elements are unique.
```

## 🛠 Technologies Used

- C Programming
- Random Number Generation (`rand()`)
- Array Processing
- Nested Loops
- Standard Input/Output

## 📚 Concepts Covered

- Element Uniqueness Problem
- Brute Force Algorithm
- Array Traversal
- Random Number Generation
- Time Complexity Analysis
- Algorithm Design

## 👨‍💻 Author

**Tanishq**
B125134
B.Tech – Computer Science and Engineering
Design and Analysis of Algorithms (DAA) Lab

## 📄 License
This project is created for educational and academic purposes.
