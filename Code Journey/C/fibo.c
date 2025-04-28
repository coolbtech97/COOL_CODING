#include<stdio.h>
#include<stdlib.h>
int fibo(int);
int main()
{
    int n,i;
    system("cls");
    printf("Enter the number : ");
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        printf("\n%d",fibo(i));
    }
    return 1;
}
int fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}