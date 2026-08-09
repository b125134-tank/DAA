# DAA Lab-02 — Question 2

## Merge Sort vs Modified Merge Sort

### Problem Statement

Consider the following modification to Merge Sort:

* Divide the input array into three parts instead of two.
* Recursively sort each third.
* Combine the three sorted parts using a three-way merge subroutine.

Find the worst-case running time of the modified Merge Sort.

Also, write a C program to validate the order of growth for both standard Merge Sort and the modified Merge Sort by plotting their growth functions.

---

## Algorithm Analysis

### Standard Merge Sort

Standard Merge Sort divides the array into two parts and recursively sorts each part.

The recurrence relation is:

```text
T(n) = 2T(n/2) + O(n)
```

Therefore, the worst-case running time is:

```text
O(n log₂ n)
```

---

### Modified Merge Sort

The modified Merge Sort divides the array into three parts and recursively sorts each part.

The three sorted parts are then combined using a three-way merge, which takes `O(n)` time.

The recurrence relation is:

```text
T(n) = 3T(n/3) + O(n)
```

Therefore, the worst-case running time is:

```text
O(n log₃ n)
```

Using the change-of-base formula:

```text
log₃(n) = log₂(n) / log₂(3)
```

Hence:

```text
O(n log₃ n) = O(n log n)
```
Both algorithms have the same asymptotic complexity:

```text
Θ(n log n)
```

## Complexity Comparison

| Algorithm           | Recurrence              | Worst-Case Complexity |
| ------------------- | ----------------------- | --------------------- |
| Merge Sort          | `T(n) = 2T(n/2) + O(n)` | `O(n log₂ n)`         |
| Modified Merge Sort | `T(n) = 3T(n/3) + O(n)` | `O(n log₃ n)`         |

## Implementation

The C program generates the theoretical growth values for both algorithms for different values of `n`.

### Growth Functions

**Standard Merge Sort:**

```text
n log₂(n)
```

**Modified Merge Sort:**

```text
n log₃(n)
```

The generated values are stored in:

```text
merge_sort.txt
```
## Files

```text
merge_sort_comparison.c
merge_sort.txt
merge_sort_comparison.gnu
README.md
```

### `merge_sort_comparison.c`

C program that calculates the order-of-growth values of standard Merge Sort and modified Merge Sort.

### `merge_sort.txt`

Output data file containing:

```text
n
Merge Sort
Modified Merge Sort
```

### `merge_sort_comparison.gnu`

Gnuplot script used to plot and compare the growth of both algorithms.

### `README.md`

Documentation for the problem, algorithm analysis, implementation, and result.

---

## Compilation

Compile the C program using GCC:

```bash
gcc merge_sort_comparison.c -o merge_sort -lm
```

The `-lm` option links the mathematical library required for `log2()`.

---

## Execution

Run the program:

```bash
./merge_sort
```

The program generates:

```text
merge_sort.txt
```

---

## Plotting Using Gnuplot

Open Gnuplot and execute:

```gnuplot
load "merge_sort_comparison.gnu"
```

The graph compares:

* Merge Sort — `O(n log₂ n)`
* Modified Merge Sort — `O(n log₃ n)`

---

## Result

The modified Merge Sort has the recurrence:

```text
T(n) = 3T(n/3) + O(n)
```

and its worst-case running time is:

```text
O(n log₃ n)
```

The standard Merge Sort has:

```text
O(n log₂ n)
```

Both algorithms have the same asymptotic order:

```text
Θ(n log n)
```

The Gnuplot graph provides a visual comparison of their order of growth.

## Conclusion

Dividing the array into three parts instead of two changes the logarithmic base but does not change the overall asymptotic complexity. Therefore, both standard Merge Sort and the modified three-way Merge Sort have a worst-case running time of:

```text
Θ(n log n)
```