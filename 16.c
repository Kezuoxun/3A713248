#include <stdio.h> 

#include <stdlib.h>

#include <string.h>



int main()

{

    char num[10][3]={"零","壹","貳","參","肆","伍","陸","柒","捌","玖"};

    char ch[3][3]={"仟","佰","拾"};

    char wan[3][3]={"兆","億","萬"};

    int i, j, len, group, start, digit, c=0, flag=0;

    char n[20];

	printf("計算機概論實務-基礎練習作業-作業16\n");

	printf("-------------------------------------------------\n");  

    printf("請輸入一個整數(此數需要小於16位數)：" );

    scanf("%s",n); 

    len = strlen(n);

    if (len>16)  

    {

                printf("此整數長度超過16位數, 無法轉換...\n");

                exit(0);

    }

    group=(len-1)/4+1;

    printf("轉換後的結果：");

    for(i=0;i<group;i++)

    {

                        flag=0;

                        if (i==0) start=(4-len%4)%4;

                        else start=0;

                        for (j=start;j<4;j++)

                        {

                            digit=n[c++]-48;

                            if(digit==0) continue; 

                            printf("%s",num[digit]);

                            if(j!=3) 

                             printf("%s",ch[j]);

                             flag=1;

                        }

                        if (group!=1 && i!=group-1 && flag!=0)

                        {

                                     printf("%s",wan[4-group+i]);

                        }

    }

    printf("\n");

    system("pause");

    return 0;

}
