clean:
	rm *a *o *so mains maindloop maindrec

all: mains maindloop maindrec

basicClassification.o: basicClassification.c
	gcc -c -fpic -Wall basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c
	gcc -c -fpic -Wall advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c
	gcc -c -fpic -Wall advancedClassificationRecursion.c

main.o: main.c NumClass.h
	gcc -c -fpic -Wall main.c

loops: libclassloops.a

libclassloops.a: basicClassification.o advancedClassificationLoop.o
	ar -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o

recursives: libclassrec.a

libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	ar -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o

loopd: libclassloops.so

libclassloops.so: basicClassification.o advancedClassificationLoop.o
	gcc -shared basicClassification.o advancedClassificationLoop.o -Wall -o libclassloops.so

recursived: libclassrec.so

libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	gcc -shared basicClassification.o advancedClassificationRecursion.o -Wall -o libclassrec.so


mains: main.o libclassrec.a
	gcc -Wall main.o -L. -lclassrec -o mains

maindloop: main.o libclassloops.so
	gcc -Wall main.o -L. -lclassloops -o maindloop

maindrec: main.o libclassrec.so
	gcc -Wall main.o -L. -lclassrec -o maindrec
