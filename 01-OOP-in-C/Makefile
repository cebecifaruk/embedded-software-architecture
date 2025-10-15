OBJS = build/main.o build/person.o
CFLAGS = -Wall -Wextra -Werror -std=c99 -I ./include

all: build/out

clean:
	rm -rf build

run: build/out
	./build/out

build/:
	mkdir -p build

build/out: build/ $(OBJS)
	gcc $(CFLAGS) $(OBJS) -o build/out

build/%.o: src/%.c build/
	gcc $(CFLAGS) -c $< -o $@