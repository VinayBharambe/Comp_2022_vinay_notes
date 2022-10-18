set terminal postscript
set output 'periodic1.eps'
set xlabel 'x'
set ylabel 'y'
set yrange[-2:2]
plot "result.txt" u 1:2 title "Periodic Function"
set term x11
