#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sex,age;
	printf("請輸入性別(男生1,女生2)");
	scanf("%d",&sex);
	printf("請輸入年齡");
	scanf("%d",&age);
	if( sex==1 )
    {
    	if(age>=18)
         {
		  printf ("你可以結婚\n") ;
         }
	     else
		 {
	      printf("你不可以結婚\n");
	     }  
    }
    if( sex==2 )
    {
    	if(age>=16)
         {
		  printf ("你可以結婚\n") ;
         }
	     else
		 {
	      printf("你不可以結婚\n");
	     }  
		 }
	system("pause");
	return 0;
}
