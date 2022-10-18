set terminal postscript enhanced color solid 22
set output 'plot2.eps'
plot "result_third_0.txt" using 1:2 with linespoints, "result_third_1.txt" using 1:2 with linespoints, "result_third_2.txt" using 1:2 with linespoints, "result_third_3.txt" using 1:2 with linespoints
set terminal x11
