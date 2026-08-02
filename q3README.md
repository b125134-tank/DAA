# 🔄 Performance Analysis of Bubble Sort using C and GNUplot

## 📖 Description

This project is a solution to **Question 3** of the **Design and Analysis of Algorithms (DAA) Lab**.

The program implements and compares two versions of the **Bubble Sort** algorithm on randomly generated arrays. It records the number of comparisons made by each version, stores the results in a text file (`q3.txt`), and automatically executes a GNUplot script (`q3.gnu`) to visualize their performance.

## 🎯 Objective

- Implement two versions of the Bubble Sort algorithm.
- Compare their performance based on the number of comparisons.
- Analyze the effect of early termination on sorting efficiency.
- Visualize the comparison using GNUplot.

## 📂 Project Structure

├── q3.c
├── q3.gnu
├── q3.exe          (Generated after compilation)
├── q3.txt          (Generated automatically)
└── README.md

## 📊 Algorithms Implemented

### 1. Optimized Bubble Sort
- Stops sorting if no swaps occur during a pass.
- Reduces unnecessary comparisons when the array becomes sorted early.

### 2. Standard Bubble Sort
- Completes all **(n − 1)** passes regardless of whether the array is already sorted.
- Performs a fixed number of comparisons for a given input size.

## ⚙️ Requirements

- GCC Compiler (MinGW GCC)
- GNUplot
- Visual Studio Code (Recommended)
- C Standard Library

## 🚀 Compilation

```bash
gcc q3.c -o q3
```

## ▶️ Execution

### Windows

```bash
q3
```

### Linux

```bash
./q3
```

The program will:

1. Generate `q3.txt`.
2. Execute `q3.gnu`.
3. Display the comparison graph automatically using GNUplot.

## 📈 Graph Details

- **X-axis:** Input Size (Number of Elements)
- **Y-axis:** Number of Comparisons
- **Plots:**
  - Optimized Bubble Sort
  - Standard Bubble Sort

The graph compares the number of comparisons performed by both algorithms for different input sizes, highlighting the efficiency gained through early termination.

## 🛠 Technologies Used

- C Programming
- GNUplot
- Bubble Sort Algorithm
- File Handling
- Random Number Generation (`rand()`)
- Time Library (`time.h`)

## 📚 Concepts Covered

- Bubble Sort
- Algorithm Analysis
- Time Complexity
- Performance Comparison
- Best, Average, and Worst Case Analysis
- Data Visualization using GNUplot

## 👨‍💻 Author

**Tanishq**
B15134
B.Tech – Computer Science and Engineering
Design and Analysis of Algorithms (DAA) Lab

## 📄 License
This project is created for educational and academic purposes.
