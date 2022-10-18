set terminal postscript enhanced color solid 22
set output 'plot2.eps'
set xlabel 'x'
set ylabe 'cos(x)'
plot "result_second.txt" using 1:2 with linespoints, "result_second.txt" using 1:3 with linespoints
set terminal x11
