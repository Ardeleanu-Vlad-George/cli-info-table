
OBJ := obj/main.o obj/io.o

TRG := out/cliinfotable

$(TRG) : $(OBJ)
	gcc -o $@ $^

$(OBJ): obj/%.o : src/%.c
	gcc -I inc/ -std=c99 -c -o $@ $^

clean:
	rm $(OBJ)
