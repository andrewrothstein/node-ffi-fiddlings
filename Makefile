foo.o: foo.c
	gcc -c -Wall -Werror -fpic -c foo.c 

libfoo.dylib: foo.o
	gcc -shared -o libfoo.dylib foo.o

app: libfoo.dylib app.c
	gcc -o app -L. -lfoo app.c

run-app: app
	./app
	node index.js
