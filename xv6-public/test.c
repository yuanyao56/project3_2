
#include "types.h"
#include "stat.h"
#include "user.h"
int main(){
  int *test=malloc(4096*29);
  int i=0;
  for(i=0;i<4096*18/4;i++){
	test[i]=i;
        if(!(i % (4096/4)))
	   printf(1, "w0x%x\n\n", &test[(int)i]);
  }
  for(i=0;i<4096*18/4;i++){
        if(test[i]!=i){
	    printf(1, "error %x\n",&test[i]);
	    exit();
	}
        if(!(i % (4096/4)))
           printf(1, "r0x%x\n\n", &test[(int)i]);

  }

  exit();



}
