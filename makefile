./thinkingbyte.exe : main.o thinkingbyte.o
	gcc main.o thinkingbyte.o -o thinkingbyte.exe
main.o : main.c thinkingbyte.h
	gcc -c main.c
thinkingbyte.o : thinkingbyte.c thinkingbyte.h
	gcc -c thinkingbyte.c
