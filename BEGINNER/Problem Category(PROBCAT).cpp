#include <stdio.h>

int main(void) {
     int t,x;
     scanf("%d",&t);
     for(int i=0;i<t;i++){
      scanf("%d",&x);
      if(x>=1&&x<100) printf("easy\n");
      if(x>=100&&x<200) printf("medium\n");
      if(x>=200&&x<=300) printf("hard\n");

     }
        
     
	return 0;
}
