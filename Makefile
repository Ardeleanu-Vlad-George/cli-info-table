
OBJ := obj/main.o

TRG := out/cliinfotable

$(TRG) : $(OBJ)
	gcc -o $@ $^

$(OBJ): obj/%.o : src/%.c
	gcc -std=c99 -c -o $@ $^

clean:
	rm $(OBJ)
