set terminal postscript enhanced color solid 22
set output 'plot2.eps'
plot "data1.txt" using 1:2 with linespoints, "data1.txt" using 1:3 with linespoints
set terminal x11
