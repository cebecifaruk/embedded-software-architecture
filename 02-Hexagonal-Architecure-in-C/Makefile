COMMON_OBJS = build/temperature_controller.o
OBJS = $(COMMON_OBJS) build/virtual_temperature_sensor.o build/stm32_heating_driver.o build/main.o
TEST_OBJS = $(COMMON_OBJS) build/mock_heating_driver.o build/mock_temperature_sensor.o build/test.o
CFLAGS = -Wall -Wextra -Werror -std=c99 -I ./include

all: build/out

clean:
	rm -rf build

run: build/out
	./build/out

test: build/test
	./build/test

build/:
	mkdir -p build

build/out: build/ $(OBJS)
	gcc $(CFLAGS) $(OBJS) -o build/out

build/test: build/ $(TEST_OBJS)
	gcc $(CFLAGS) $(TEST_OBJS) -o build/test

build/%.o: src/%.c build/
	gcc $(CFLAGS) -c $< -o $@

build/test.o: test/main.c build/
	gcc $(CFLAGS) -c $< -o $@

build/mock_heating_driver.o: test/mock_heating_driver.c build/
	gcc $(CFLAGS) -c $< -o $@

build/mock_temperature_sensor.o: test/mock_temperature_sensor.c build/
	gcc $(CFLAGS) -c $< -o $@