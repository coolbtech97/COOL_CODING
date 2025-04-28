#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int fibo(int,int);
int main()
{
    int n,t=1;
    system("cls");
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d",fibo(t,n));
    return 0;
}
int fibo(int i,int num)
{
    if(i<=0)
    {   
        return 0;
    }
    return fibo(i-1,num)*fibo(i-2,num);
}