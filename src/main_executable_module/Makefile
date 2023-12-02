CC = gcc
CFLAGS = -Wall -Werror -Wextra
all: Quest_3

Quest_3: data_sort.o data_process.o data_stat.o data_io.o main_executable_module.o decision.o
	$(CC) $(CFLAGS) data_sort.o data_process.o data_stat.o data_io.o main_executable_module.o decision.o -o ../../build/Quest_3

build_with_static: data_sort.o data_process.o data_stat.a data_io.o main_executable_module.o decision.o
	$(CC) $(CFLAGS) data_sort.o data_process.o data_io.o main_executable_module.o decision.o -o ../../build/Quest_5 data_stat.a 

build_with_dynamic: data_sort.o  data_stat.o data_io.o main_executable_module.o decision.o data_process.so
	$(CC) $(CFLAGS) data_sort.o data_stat.o data_io.o main_executable_module.o decision.o -o ../../build/Quest_6 data_process.so


data_sort.o: data_sort.c
	$(CC) $(CFLAGS)  -c data_sort.c -o data_sort.o

data_process.o: ../data_module/data_process.c
	$(CC) $(CFLAGS)  -c ../data_module/data_process.c -o data_process.o

data_stat.o: ../data_libs/data_stat.c
	$(CC) $(CFLAGS)  -c ../data_libs/data_stat.c -o data_stat.o

data_io.o: ../data_libs/data_io.c
	$(CC) $(CFLAGS)  -c ../data_libs/data_io.c -o data_io.o

main_executable_module.o: main_executable_module.c
	$(CC) $(CFLAGS)  -c main_executable_module.c -o main_executable_module.o

decision.o : ../yet_another_decision_module/decision.c
	$(CC) $(CFLAGS)  -c ../yet_another_decision_module/decision.c -o decision.o

data_stat.a: data_stat.o
	ar rc data_stat.a data_stat.o
	ranlib data_stat.a

data_process.so: data_process.o
	$(CC) -shared -o data_process.so data_process.o data_stat.o

clean:
	rm -f *.o *.so *.a ../../build/Quest_*

rebuild: clean Quest_3