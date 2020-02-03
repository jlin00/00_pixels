all: picmaker.c
	gcc -o pmaker picmaker.c -lm 
	./pmaker
