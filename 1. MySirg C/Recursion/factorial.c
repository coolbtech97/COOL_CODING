#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int n,f;
    clrscr();
    printf("Enter the number");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial of %d is %d",n,f);
    getch();
}
int fact(int a)
{
    if(a==1)
    {
        return 1;
    }
    return a*fact(a-1);
}