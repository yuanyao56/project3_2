
#include "types.h"
#include "stat.h"
#include "user.h"
int main(){
  char *test=malloc(4096*20);
  int i=0;
  for(i=0;i<4096*19;i++){
        if(!(i % 4096))
	   printf(1, "0x%x\n", &test[i]);
	test[i]=0;
  }
  printf(1,"%d",test[0]);
  exit();



}
