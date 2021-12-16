#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINE_BUF_SIZE  1024

int step;
int N;
int Ai[2000];

int main(void) {

  static char line[LINE_BUF_SIZE];
  char *token;
  int index = 1;
  char delim[] = " ";
  int i;
  int ans,h;
  int tmp;

  while (fgets(line, sizeof(line), stdin) != NULL) {
    printf("line[%d]: %s", index, line);
    if (index==1) {
        step = atoi(line);
	printf("step = %d\n", step);
    } else if (index==2) {
        N = atoi(line);
        printf("N = %d\n", N);
    } else if (index==3) {
	 i=0;
         token = strtok(line,delim);
         while(token != NULL){
	    printf("token = %s\n",token);
            token = strtok(NULL,delim);
	    if(token != NULL) {
                 Ai[i] = atoi(token);
		 printf("Ai[%d] = %d\n",i,Ai[i]);
            }
	    i++;
        }
    }
    index++;
  }
  
  tmp = N/2;

  //ans=(N/2)*(N/2);
  ans=tmp * ( N - tmp);

  printf("最大値=%d\n",ans);
 
 
 // if(N%2==0){
 //	 h=N/2-1;
 //	 while(h>0){
   //	 	ans = ans + Ai[h];
//	       	h--;
 //	 }
 //	 ans=ans*(N/2);
   //    	 printf("最大値=%d\n",ans);
 // }else{
  	 	  
  return 0;
}
