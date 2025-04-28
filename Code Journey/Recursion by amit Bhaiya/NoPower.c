#include<Stdio.h>
#include<conio.h>
#include<stdlib.h>
int power(int,int);
int main()
{
    int n,p;
    system("cls");
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Enter the power : ");
    scanf("%d",&p);
    printf("%d",power(n,p));
    getch();
    return 0;
}
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    return n*power(n,p-1);
}