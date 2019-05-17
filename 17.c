#include <stdio.h>　

#include <stdlib.h> 

int main(int argc, char *argv[]) {

	int a[5]={0};

	int i=0, min;

	printf("-------------------------------------------------\n");  

	printf("             找尋陣列中最小值的程式              \n");

	printf("-------------------------------------------------\n");   

	printf("請連續輸入五個數值：\n");

	for(i=0;i<5;i++)

	{

	   printf("第%d筆資料：", i+1 );

	   scanf("%d", &a[i]);

	}

	min=a[0];

	for(i=0;i<5;i++)

	{

	  if (min>a[i])	

	  {

		  min=a[i];

	  }

	}

	printf("最小值是：%d\n\n",min); 

	system("PAUSE");	

	return 0;

}
