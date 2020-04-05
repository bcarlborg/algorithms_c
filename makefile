cc = gcc
out = algos

csrc = $(wildcard *.c) \
			 $(wildcard sorting/*.c)
obj = $(csrc:.c=.o)

$(out): $(obj)
	$(cc) -o $@ $^

.PHONY: clean
clean:
	rm -f $(obj) $(out)
