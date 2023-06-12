out:calculator.o add.o sub.o mul.o division.o mod.o atoi.o
	gcc -o out calculator.o add.o sub.o mul.o division.o mod.o atoi.o
atoi.o: atoi.c
	gcc -c atoi.c
calculator.o: calculator.c
	gcc -c calculator.c
add.o: add.c
	gcc -c add.c
sub.o: sub.c
	gcc -c sub.c
mul.o: mul.c
	gcc -c mul.c
division.o: division.c
	gcc -c division.c
mod.o: mod.c
	gcc -c mod.c
.PHONY: clean
clean:
	rm *.o
