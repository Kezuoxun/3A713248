#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
char input,output;
    printf("輸入要轉換的字元:");
    scanf("%c",&input);
    if((input>='A')&&(input<='Z')){        
        output=input+32;
        printf("%c",output);}
    else if((input>='a')&&(input<='z')){
        output=input-32;
        printf("%c",output);}
	system("PAUSE");
	return 0;
}
