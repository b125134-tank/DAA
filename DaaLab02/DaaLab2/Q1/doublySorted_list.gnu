set terminal wxt size 1000,700

set title "Doubly Linked Sorted List - Dictionary Operations"

set xlabel "Input Size (n)"
set ylabel "Growth"

set grid
set key outside

plot \
"doubly_sorted_list.txt" using 1:2 with lines title "Search O(n)", \
"doubly_sorted_list.txt" using 1:3 with lines title "Insert O(n)", \
"doubly_sorted_list.txt" using 1:4 with lines title "Delete O(n)", \
"doubly_sorted_list.txt" using 1:5 with lines title "Maximum O(1)", \
"doubly_sorted_list.txt" using 1:6 with lines title "Minimum O(1)", \
"doubly_sorted_list.txt" using 1:7 with lines title "Predecessor O(1)", \
"doubly_sorted_list.txt" using 1:8 with lines title "Successor O(1)"

pause -1