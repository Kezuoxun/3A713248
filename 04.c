#include<stdio.h> 
#include<stdlib.h> 
int main(void) 
{ 
int h=0,m=0,s=0;//h=小時,m=分鐘,s=秒 
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



printf("%d時%d分%d秒\n",h,m,s); 

system("pause"); 
return 0; 
} 
