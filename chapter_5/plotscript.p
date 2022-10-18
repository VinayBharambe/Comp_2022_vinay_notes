set terminal postscript enhanced color solid 22
set output 'plot2.eps'
plot "res.txt" using 1:2 with linespoints, "res.txt" using 1:3 with linespoints 
set terminal x11
