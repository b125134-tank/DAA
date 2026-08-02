# 🪙 Fair vs Biased Coin Toss Simulation using C and GNUplot

## 📖 Description

This project is a solution to **Question 2** of the **Design and Analysis of Algorithms (DAA) Lab**.

The program simulates the tossing of a **Fair Coin** and a **Biased Coin** for different numbers of tosses. It calculates the experimental probability of obtaining heads, stores the results in a text file (`q2.txt`), and automatically executes a GNUplot script (`q2.gnu`) to visualize the comparison between the two coins.

## 🎯 Objective

- Simulate the probability of obtaining heads using a fair coin.
- Compare the results with a biased coin.
- Observe how the experimental probabilities converge to their theoretical values as the number of tosses increases.
- Visualize the results graphically using GNUplot.

## 📂 Project Structure

├── q2.c
├── q2.gnu
├── q2.exe          (Generated after compilation)
├── q2.txt          (Generated automatically)
└── README.md

## 📊 Simulation Details

The program performs simulations for the following numbers of tosses:

- 100
- 200
- 400
- 800
- 1600
- 3200
- 6400

For each simulation:

- **Fair Coin:** Probability of Heads = **0.5**
- **Biased Coin:** Probability of Heads = **0.7**

The experimental probabilities are calculated and written to `q2.txt`.

## ⚙️ Requirements

- GCC Compiler (MinGW GCC)
- GNUplot
- Visual Studio Code (Recommended)
- C Standard Library

## 🚀 Compilation

```bash
gcc q2.c -o q2
```

## ▶️ Execution

### Windows

```bash
q2
```

### Linux

```bash
./q2
```

The program will:

1. Generate `q2.txt`.
2. Execute `q2.gnu`.
3. Display the probability graph automatically using GNUplot.

## 📈 Graph Details

- **X-axis:** Number of Tosses
- **Y-axis:** Experimental Probability of Heads
- **Plots:**
  - Fair Coin
  - Biased Coin

The graph illustrates that the probability of heads for the fair coin approaches **0.5**, while the biased coin approaches **0.7** as the number of tosses increases.

## 🛠 Technologies Used

- C Programming
- GNUplot
- File Handling
- Random Number Generation (`rand()`)
- Time Library (`time.h`)

## 📚 Concepts Covered

- Probability Simulation
- Random Number Generation
- Experimental vs. Theoretical Probability
- Monte Carlo Simulation
- File Handling in C
- Data Visualization using GNUplot

## 👨‍💻 Author

**Tanishq**
B125134
B.Tech – Computer Science and Engineering
Design and Analysis of Algorithms (DAA) Lab

## 📄 License
This project is created for educational and academic purposes.
