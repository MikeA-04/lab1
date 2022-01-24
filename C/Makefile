SRC = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRC))
ASM = $(patsubst %.c, %.s, $(SRC))

lab1: $(OBJS)
	gcc -Wall -o $@ $^

$(OBJS): %.o:%.c
	gcc -c -Wall -o $@ $<

test: lab1 test_readelf test_objdump

test_readelf: lab1
	readelf -sW *.o

test_objdump: lab1 $(ASM)
	objdump -d lab1 > lab1.s

$(ASM): %.s:%.o
	objdump -d $< > $@

clean:
	rm -f lab1 *.o *.s
