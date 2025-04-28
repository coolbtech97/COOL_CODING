#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,m=1,i,ok=0,q;
    system("cls");
    printf("Enter the number : ");
    scanf("%d",&n);
    int a[100]={0};
    for(i=0;n;i++)
    {
        a[i]=n%2;
        n/=2;
    }
    for(q=i+1;q>=0;q--)
    {
        if(a[q])
        {
            ok=1;
        }
        if(ok)
        {
            printf("%d",a[q]);
        }
    }
    printf("\n");
    getch();
    return 0;
}