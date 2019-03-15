#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int x,sum=0;
for(x=1;x<=100;x++)
sum=sum+x;
printf("1+2+3+...+100=%d\n",sum);

	return 0;
}
