#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int year,month,day;
printf("請輸入您的出生年分(西元):");
scanf("%d",&year);
printf("請輸入您的出生月份:");
scanf("%d",&month);
printf("請輸入您的出生日:");
scanf("%d",&day);
printf("您的出生年月日: %d,%d,%d\n",year,month,day);
system("pause");
	return 0;
}
