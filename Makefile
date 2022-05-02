RM := rm -rf

SRC := $(wildcard ./src/*.c)

CC ?= gcc

C_FLAGS := -Wall -Wextra

ifeq ($(CC),clang)
	C_FLAGS += -Weverything
endif

all: main.out

test: test.out

main.out:
	$(CC) $(C_FLAGS) -Iinc ./app/main.c $(SRC) -o $@

test.out:
	$(CC) $(C_FLAGS) -Iinc ./test/test.c $(SRC) -o $@

clean:
	$(RM) main.out
	$(RM) test.out
	$(RM) $(OBJ)

