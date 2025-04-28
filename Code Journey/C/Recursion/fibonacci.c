#include<stdio.h>
#include<conio.h>
int fibo(int);
void main()
{
    int n,i,f;
    clrscr();
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",fibo(i));
    }
    getch();
}
int fibo(int a)
{
    if(a<=1)
    {
        return a;
    }
    return fibo(a-1)+fibo(a-2);
}