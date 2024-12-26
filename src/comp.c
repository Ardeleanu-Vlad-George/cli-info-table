#include "comp.h"
#include <stdlib.h>
#include <string.h>

char* make_spaced_table(int colm_cnt, int elem_cnt, char* item[]){
  int line_cnt=elem_cnt/colm_cnt;
  int iter, res_len, len, max_len;
  char *res, *tmp;

  for(
    iter=0, res_len=0, max_len=-1;
    iter < elem_cnt; 
    len=strlen(item[iter++])
  ){
    res_len+=len+1;
    max_len < len ? max_len=len : 0;
  }

  res = (char*) calloc(res_len+1, 1);
  *res = '\0';
  tmp = (char*) calloc(max_len+2, 1); 

  for(iter=0; iter<elem_cnt; iter++){
    sprintf(tmp, "%s%c", item[iter], (iter+1) % colm_cnt==0 ? '\n' : '\t');
    strcat(res, tmp);
  }

  free(tmp);
  return res;
}
