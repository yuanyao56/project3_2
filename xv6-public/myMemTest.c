#include "types.h"
#include "stat.h"
#include "user.h"
int
main(){
       	char a[4096*3];
        int i = 0;
        //int status = 0;
        for (i = 0; i < 4096*3; i++){
                a[i] = 1;
        }

	int b = fork();
        if(b!=0){
                wait();
        }
	else{
             	for(i=0;i<4096*3;i++){
                        printf(1,"%c\n",a[i]);
                }
                return 0;
        }
        return 0;
}
