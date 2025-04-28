#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    long long int n,r,sum,c=1,x;
    system("cls");
    printf("Enter the number : ");
    //Using scanf in loop, if user inputs wrong binary other than 0,1
    //then, we can ask them to put the decimal number again
    while(n)
    {
        if(c)
        {
            scanf("%d",&n);
            c=0;
            x=1;
            sum=0;
        }
        r=n%10;
        if(r==1)
        {
            sum+=x;
        }
        if(r!=0 &&  r!=1)
        {
            printf("\nEnter a binary number : ");
            c=1;
        }
        x*=2;
        n/=10;
    }
    printf("Decimal of %d : %d\n",n,sum);
    return 0;
}