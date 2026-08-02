set terminal windows

set title "Bubble Sort Comparison"

set xlabel "Input Size (n)"

set ylabel "Number of Comparisons"

set grid

set key left top

plot \
"bubble.txt" using 1:2 with lines lw 2 title "Early Termination",\
"bubble.txt" using 1:3 with lines lw 2 title "Normal Bubble Sort"

pause -1