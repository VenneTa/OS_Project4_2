#include "types.h"
#include "stat.h"
#include "user.h"

// FUNCTION THAT USER CALLS

int
main(void){
  int rc = readcount();
  printf(1, "%d\n", rc);
  exit();
}
