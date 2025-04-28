#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0,r;
    system("cls");
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        sum*=10;
        sum=sum+r;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}