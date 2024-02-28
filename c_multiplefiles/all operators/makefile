all: clean math run
math: math.c add.c sub.c mul.c div.c
	@gcc math.c add.c sub.c mul.c div.c -o math
clean:
	@rm -rf math
run:
	@./math	
