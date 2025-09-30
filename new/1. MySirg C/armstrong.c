#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,size=0,nc,i,x,Number,r,mul,arm=0;
    system("cls");
    printf("Enter the number to check Armstrong or not : ");
    scanf("%d",&n);
    nc=Number=n;
    while(nc)
    {
        nc%=10;
        size++;
    }
    while(n)
    {
        r=n%10;
        mul=1;
        for(x=0;x<size;x++)
        {
            mul*=r;
        }
        arm+=mul;
        n/=10;
    }
    printf(Number==arm?"Armstrong":"Not Armstrong");
    return 0;
}