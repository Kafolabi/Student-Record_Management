CC = gcc
CFLAGS = -Wall
SRC = main.c modules/add_student.c modules/view_student.c modules/search_student.c modules/modify_student.c modules/delete_student.c modules/analytics.c modules/sort_student.c modules/file_handling.c modules/menu.c
OUT = student_system

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)

# Common helpers
GLOBAL = tests/globals.c

# Targets
.PHONY: test_add
test_add: tests/test_add.c modules/add_student.c $(GLOBAL)
	$(CC) $(CFLAGS) tests/test_add.c modules/add_student.c $(GLOBAL) -o test_add
	./test_add