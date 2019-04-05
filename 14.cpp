#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("輸入1個數字:");
	scanf("%d",&a);
    printf("輸入1個數字:");
	scanf("%d",&b);
	printf("輸入1個數字:");
	scanf("%d",&c);
	if(a+b>c&&a+c>b&b+c>a)
	printf("是個三角形\n");
	else
	printf("不是三角形\n");
	system("pause");
	return 0;
}
