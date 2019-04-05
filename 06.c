#include <stdio.h>

#include <stdlib.h>

int main(void)

{

int year;

printf("輸入一個西元年數:");

scanf("%d" , &year);

if(year % 400 == 0 )

printf("%d年是閏年\n",year);  

else if(year % 100 == 0)

printf("%d年是平年\n",year);

else if(year % 4 == 0)

printf("%d年是閏年\n",year);

else

printf("%d年是平年\n",year);

    system("pause");

    return 0; 

}
