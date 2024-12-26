
#include "io.h"

FILE* log_help(FILE* f){
  fprintf(f, "Print a table of at least 2 by 2 dimensions by giving the following args\n");
  fprintf(f, "\tThe number of elements on a line\n");
  fprintf(f, "\tThe elements of the table, the number of lines is determined by dividing their count to the previous number\n");
  fprintf(f, "The program expects for the division to give correct results and for enough elements to be provided\n");
  fprintf(f, "Behaviour is undefined otherwise\n");
  return f;
}

FILE* log_cla_err(FILE* f, int err, int min){
  fprintf(f, "You've given %d args\n", err);
  fprintf(f, "At least %d are needed\n", min);
  return log_help(f);
}
