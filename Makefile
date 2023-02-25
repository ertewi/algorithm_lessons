main : main.c
	gcc -c *.c
	gcc -Wall -Werror -o p *.o -lm