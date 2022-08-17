# Simple_Calculator_
Simple_calculator using c languge 


I wrote this program in Ubuntu and at runtime
I ran into this problem which was related to
the math library The problem was solved by typing the following command


test.c:(.text+0x40): undefined reference to `pow'
collect2: ld returned 1 exit status



$ gcc -static simple_cal.o -lm


$ nm a.out | grep pow


