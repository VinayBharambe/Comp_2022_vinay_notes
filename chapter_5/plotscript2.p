set terminal postscript enhanced color solid 22
set output 'plot2.eps'
plot "res1.dat" using 1:2 with linespoints,"res1.dat" using 1:3 with linespoints 
set terminal x11
