set terminal windows

set title "Tower of Hanoi"

set xlabel "Number of Disks"

set ylabel "Number of Moves"

set grid

set key left top

plot \
"toh.txt" using 1:2 with linespoints lw 2 pt 7 title "Moves"

pause -1