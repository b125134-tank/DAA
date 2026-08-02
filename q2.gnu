set terminal windows

set title "Fair Coin vs Biased Coin"

set xlabel "Number of Tosses"

set ylabel "Probability of Head"

set grid

set key right bottom

set yrange [0:1]

plot \
"coin.txt" using 1:2 with lines lw 2 title "Fair Coin",\
"coin.txt" using 1:3 with lines lw 2 title "Biased Coin"

pause -1