all: picmaker.c
	gcc -o pmaker picmaker.c
	./pmaker
	convert image.ppm image.png
	display image.png
