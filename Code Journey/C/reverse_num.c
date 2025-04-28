#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,a[15]={0,0,0},n,N,r,j,sum=0,mul=1;
    system("cls");
    printf("Enter the integer : ");
    scanf("%d",&n);
    N=n;
    for(i=-1;n;i++)
    {
        n/=10;
    }
    for(j=0;j<i;j++)
    {
        r=n%10;
        a[j]=r;
        n/=10;
    }
    for(j=i-1;j>=0;j--)
    {
        sum+=mul*a[j];
        mul*=10;
    }
    printf("reverse of %d is %d\n",N,sum);
    return 0;
}