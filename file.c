#include<stdio.h>
#include<conio.h>
int main()
{
int a[10][10],b[10][10],c[10][10],i,j,k,m,n,m1,n1;

printf("Enter array size ");
scanf("%d%d",&m,&n);
printf("Enter array size 2");
scanf("%d%d",&m1,&n1);
if(n!=m1)
{
printf("Wrong choice entered");
getch();
}
else
{
printf("Enter elements");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter element 2");
for(i=0;i<m1;i++)
{
for(j=0;j<n1;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n1;j++)
{
c[i][j]=0;
for(k=0;k<n;k++)
{
c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}
}
}
printf("REQUIRED MATRIX");
for(i=0;i<m;i++)
{
for(j=0;j<n1;j++)
{
printf("\n%d",c[i][j]);
}
printf("\n");
}
getch();
}
}