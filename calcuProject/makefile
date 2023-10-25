calculator: calculator.c lib/libcalc.a
	gcc -pg -o calculator calculator.c -I./lib -L./lib -lcalc

lib/libcalc.a: lib/add.o lib/sub.o lib/mul.o lib/div.o
	ar rcs lib/libcalc.a lib/add.o lib/sub.o lib/mul.o lib/div.o

lib/add.o: lib/add.c
	gcc -c -o lib/add.o lib/add.c

lib/sub.o: lib/sub.c
	gcc -c -o lib/sub.o lib/sub.c

lib/mul.o: lib/mul.c
	gcc -c -o lib/mul.o lib/mul.c

lib/div.o: lib/div.c
	gcc -c -o lib/div.o lib/div.c

clean:
	rm -f calculator
	rm -f lib/*.a
	rm -f lib/*.o
