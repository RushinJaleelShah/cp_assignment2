#include<stdio.h>
int main()
{
int space=0;
for(int i=1;i<=5;i++)
{
for(int j=5;j>=space;j--)
{
printf(" ");
}
for(int k=1;k<=i;k++)
{
printf("%d",k);
}
for(int l=(i-1);l>=1;l--)
{
printf("%d",l);
}
printf("\n");
space++;
}
return 0;
}
