#include<stdio.h>
int fact(int);
int main()
{
    int n;
    system("cls");
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The factorial of %d: %d",n,fact(n));
    return 0;
}
int fact(int z)
{
    int a;
    if(z==1)
    {
        return 1;
    }
    a=z*fact(z-1);
    return a;
}