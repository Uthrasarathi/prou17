#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,k=0,sum[10],t=1,a;
scanf("%d",&num);
a=num;
while(num!=0)
{
sum[k++]=num%10;
num=num/10;
}
for(i=1;i<num;i++)
{
t=t*sum[i];
}
printf("%d",t*a);
getch();
}
