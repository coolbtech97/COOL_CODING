#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int sume(int);
int main()
{
    int n;
    system("cls");
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d",sume(n));
    getch();
    return 0;
}
int sume(int s)
{
    if(s==0)
    {
        return 0;
    }
    return s+sume(s-1);
}