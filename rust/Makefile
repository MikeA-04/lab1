SRC = $(wildcard src/*.rs)
OBJS = $(patsubst %.rs, %.o, $(SRC))
ASM = $(patsubst %.rs, %.s, $(SRC))

all: cargo_build $(OBJS)

cargo_build:
	cargo build --release

$(OBJS): %.o:%.rs
	rustc -O --emit obj -o $@ --crate-type lib $<

test: cargo_build test_readelf test_objdump

test_readelf: $(OBJS)
	readelf -sW $^

test_objdump: cargo_build $(ASM)
	objdump -d target/release/lab1 > target/release/lab1.s

$(ASM): %.s:%.o
	objdump -d $< > $@

clean:
	cargo clean
	rm -f src/*.o src/*.s
