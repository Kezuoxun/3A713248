#include<stdio.h> 
#include<stdlib.h> 
int main(void) 
{ 
int h=0,m=0,s=0;//h=�p��,m=����,s=�� 
printf("Please input second:\n"); 
scanf("%d",&s); 
fflush(stdin); 
if(s>=60) 
{ 
m=s/60; 
s=s%60; 
if(m>=60) 
{ 
h=m/60; 
m=m%60; 
} 
} 
else 
s=s%60; 



printf("%d��%d��%d��\n",h,m,s); 

system("pause"); 
return 0; 
} 
