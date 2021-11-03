baseOBJ = basicClassification.o
loopOBJ = advancedClassificationLoop.o
recOBJ = advancedClassificationRecursion.o
CC = gcc
FLAGS_OBJ = -c -fpic -Wall
FLAGS_SO = -Wall -o
FLAGS_MAIN = -Wall main.o -L. -l
RM_FLAGS = *a *o *so
PROGS = mains maindloop maindrec
.PHONY = all clean



clean:
	rm $(RM_FLAGS) $(PROGS)

all: $(PROGS)

basicClassification.o: basicClassification.c
	$(CC) $(FLAGS_OBJ) basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c
	$(CC) $(FLAGS_OBJ) advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c
	$(CC) $(FLAGS_OBJ) advancedClassificationRecursion.c

main.o: main.c NumClass.h
	$(CC) $(FLAGS_OBJ) main.c

loops: libclassloops.a

libclassloops.a: $(baseOBJ) $(loopOBJ)
	ar -rcs libclassloops.a $(baseOBJ) $(loopOBJ)

‫‪recursives‬‬: libclassrec.a

libclassrec.a: $(baseOBJ) $(recOBJ)
	ar -rcs libclassrec.a $(baseOBJ) $(recOBJ)

‫‪loopd‬‬: libclassloops.so

libclassloops.so: $(baseOBJ) $(loopOBJ)
	$(CC) -shared $(baseOBJ) $(loopOBJ) $(FLAGS_SO) libclassloops.so

‫‪recursived‬‬: libclassrec.so

libclassrec.so: $(recOBJ) $(baseOBJ)
	$(CC) -shared $(baseOBJ) $(recOBJ) $(FLAGS_SO) libclassrec.so

mains: main.o libclassrec.a
	$(CC) $(FLAGS_MAIN)classrec -o mains

maindloop: main.o libclassloops.so
	$(CC) $(FLAGS_MAIN)classloops -o maindloop

maindrec: main.o libclassrec.so
	$(CC) $(FLAGS_MAIN)classrec -o maindrec