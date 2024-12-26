#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"
#include "comp.h"
#include "io.h"

int main(int argc, char* argv[]){
  if(2 == argc && 0 == strcmp(HELP_STR, argv[1])){
    log_help(stderr);
    return 1;
  }
  if(argc-1 < MIN_CLA_COUNT){
    log_cla_err(stderr, argc-1, MIN_CLA_COUNT);
    return -1;
  }
  table(stdout, atoi(argv[1]), argc-2, argv+2);
  return 0;
}
