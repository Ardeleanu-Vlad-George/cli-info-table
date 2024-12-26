#include "comp.h"

FILE* table(FILE* dest, int colm_cnt, int elem_cnt, char *item[]){
  int line_cnt=elem_cnt/colm_cnt;
  int iter;
  for(iter=0; iter<elem_cnt; iter++)
    fprintf(dest, "%s%c", item[iter], (iter+1) % colm_cnt==0 ? '\n' : '\t');
  return dest;
}
