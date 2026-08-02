# 🗼 Towers of Hanoi Simulation using C and GNUplot

## 📖 Description

This project is a solution to **Question 4** of the **Design and Analysis of Algorithms (DAA) Lab**.

The program simulates the **Towers of Hanoi (ToH)** problem using recursion. It calculates the total number of moves required to solve the puzzle for different numbers of disks, stores the results in a text file (`q4.txt`), and automatically executes a GNUplot script (`q4.gnu`) to visualize the growth in the number of moves.

## 🎯 Objective

- Simulate the Towers of Hanoi problem using recursion.
- Calculate the total number of moves required for different numbers of disks.
- Analyze the exponential growth of the algorithm.
- Visualize the results using GNUplot.

## 📂 Project Structure

├── q4.c
├── q4.gnu
├── q4.exe          (Generated after compilation)
├── q4.txt          (Generated automatically)
└── README.md

## 📊 Simulation Details

The program performs the Towers of Hanoi simulation for:

- 1 Disk
- 2 Disks
- 3 Disks
- ...
- 15 Disks

For each value of **n**, the program:

- Solves the Towers of Hanoi recursively.
- Counts the total number of moves required.
- Stores the results in `q4.txt`.

## ⚙️ Requirements

- GCC Compiler (MinGW GCC)
- GNUplot
- Visual Studio Code (Recommended)
- C Standard Library

## 🚀 Compilation

```bash
gcc q4.c -o q4
```

## ▶️ Execution

### Windows

```bash
q4
```

### Linux

```bash
./q4
```

The program will:

1. Generate `q4.txt`.
2. Execute `q4.gnu`.
3. Display the graph automatically using GNUplot.

## 📈 Graph Details

- **X-axis:** Number of Disks
- **Y-axis:** Total Number of Moves

The graph illustrates the exponential growth in the number of moves required to solve the Towers of Hanoi problem as the number of disks increases.

## 🛠 Technologies Used

- C Programming
- GNUplot
- Recursion
- File Handling

## 📚 Concepts Covered

- Towers of Hanoi
- Recursion
- Divide and Conquer
- Exponential Time Complexity
- Algorithm Analysis
- Data Visualization using GNUplot

## 👨‍💻 Author

**Tanishq**
B125134
B.Tech – Computer Science and Engineering
Design and Analysis of Algorithms (DAA) Lab

## 📄 License
This project is created for educational and academic purposes.
