#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int a,b,c;
printf("叫块俱计计\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
if(a>c)
if(b>c)
printf("计パ=%d,%d,%d\n",c,b,a);
else
printf("计パ=%d,%d,%d\n",b,c,a);
else
printf("计パ=%d,%d,%d\n",b,a,c);
else
if (b>c)
if (a>c)
printf("计パ=%d,%d,%d\n",c,a,b);
else
printf("计パ=%d,%d,%d\n",a,c,b);
else
printf("计パ=%d,%d,%d\n",a,b,c);
system("pause");
return 0;
}
