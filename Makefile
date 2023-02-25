main : main.c
	gcc -c *.c
	gcc -Wall -Werror -o prog *.o