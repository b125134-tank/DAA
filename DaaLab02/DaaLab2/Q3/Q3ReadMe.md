# DAA Lab-02 — Question 3

## Merging K Sorted Arrays

### Problem Statement

Suppose there are **k sorted arrays**, each containing **n elements**. The objective is to combine all `k` arrays into a single sorted array containing `kn` elements.

Two methods are considered.

### Method 1

Merge the first two arrays. Then merge the resulting array with the third array, then with the fourth array, and continue until all `k` arrays have been merged.

### Method 2

Divide the `k` arrays into pairs and merge each pair. Repeat the process with the resulting arrays until only one sorted array remains.

---

## Method 1 — Sequential Merging

The merging process is:

```text
A1 + A2
    ↓
Result + A3
    ↓
Result + A4
    ↓
...
Result + Ak
```

At each step, the size of the array being merged increases.

The total work is proportional to:

```text
2n + 3n + 4n + ... + kn
```

Therefore:

```text
T(n, k) = O(nk²)
```

### Worst-Case Running Time

```text
O(nk²)
```

---

## Method 2 — Pairwise Merging

The arrays are merged in pairs.

For example, if there are 8 arrays:

```text
Round 1:
A1 + A2
A3 + A4
A5 + A6
A7 + A8

Round 2:
Result1 + Result2
Result3 + Result4

Round 3:
Final1 + Final2
```

Each round processes all `kn` elements.

The number of rounds is:

```text
log₂(k)
```

Therefore:

```text
T(n, k) = O(nk log₂ k)
```

### Worst-Case Running Time

```text
O(nk log k)
```

---

## Complexity Comparison

| Method   | Approach           | Worst-Case Running Time |
| -------- | ------------------ | ----------------------- |
| Method 1 | Sequential merging | `O(nk²)`                |
| Method 2 | Pairwise merging   | `O(nk log k)`           |

Method 2 is asymptotically more efficient than Method 1 for large values of `k`.

---

## Implementation

The C program implements both methods and generates theoretical growth values for different values of `k`.

The value of `n` is kept fixed while `k` is varied.

### Method 1 Growth Function

```text
nk²
```

### Method 2 Growth Function

```text
nk log₂(k)
```

The generated values are stored in:

```text
q3_merge.txt
```

---

## Files

```text
q3_merge_k_arrays.c
q3_merge.txt
q3_merge.gnu
README.md
```

### `q3_merge_k_arrays.c`

C program that:

* Implements the merge operation.
* Implements Method 1.
* Implements Method 2.
* Generates growth values for both methods.
* Stores the results in `q3_merge.txt`.

### `q3_merge.txt`

Output data file containing:

```text
k
Method 1
Method 2
```

The first line is:

```text
# k Method1_O(nk^2) Method2_O(nklogk)
```

### `q3_merge.gnu`

Gnuplot script used to plot and compare the growth of the two methods.

### `README.md`

Documentation describing the problem, methods, complexity analysis, implementation, and result.

---

## Compilation

Compile the C program using GCC:

```bash
gcc q3_merge_k_arrays.c -o q3 -lm
```

The `-lm` option links the mathematical library required for `log2()`.

---

## Execution

Run the program:

```bash
./q3
```

The program generates:

```text
q3_merge.txt
```

---

## Plotting Using Gnuplot

Open Gnuplot and execute:

```gnuplot
load "q3_merge.gnu"
```

The graph compares:

* **Method 1:** `O(nk²)`
* **Method 2:** `O(nk log k)`

---

## Result

For merging `k` sorted arrays, each containing `n` elements:

### Method 1

```text
O(nk²)
```

### Method 2

```text
O(nk log k)
```

Method 2 has a lower asymptotic growth rate than Method 1.

---

## Conclusion

The first method repeatedly merges the accumulated result with the next input array. As the result becomes larger after every merge, the total running time becomes:

```text
O(nk²)
```

The second method merges arrays pairwise in rounds. Each round processes all `kn` elements, and there are approximately `log₂(k)` rounds. Therefore, its running time is:

```text
O(nk log k)
```

Hence, **Method 2 is more efficient than Method 1 for large values of `k`**.

## Reference

**DAA Lab-02 — Question 3**

The problem specifies two approaches for merging `k` sorted arrays: repeated sequential merging and pairwise merging until one sorted array remains.