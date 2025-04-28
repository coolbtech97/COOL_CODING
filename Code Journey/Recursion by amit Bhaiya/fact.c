#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int fact(int);
int main()
{
    int n;
    system("cls");
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d",fact(n));
    getch();
    return 0;
}
int fact(int x)
{
    if(x<=1)
    {
        return 1;
    }
    return x*fact(x-1);
}