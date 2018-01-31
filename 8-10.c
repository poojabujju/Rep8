#include<stdio.h>
void main()
{
int a[5],i,r=0,n;
printf("Enter a number");
scanf("%d",&a[i]);
if(a[i]!=0)
{
for(i=0;i<=5;i++)
{
n=a%10;
r=r+n;
n=n/10;
printf("%d",n);
if(n%2!=0)
{
printf("%d",n);
}
else
{
printf("NO ODD NUMBERS");
}
}
}
}
