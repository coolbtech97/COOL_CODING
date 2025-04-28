#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char*p,char*q)
{
    int t=*p;
    *p=*q;
    *q=t;
}
int main()
{
    char a[50];
    int x=0;
    system("cls");
    printf("Enter the string : ");
    fgets(a,50,stdin);
    int i,j;
    for(i=0;a[i];i++)
    {
        for(j=1;a[j];j++)
        {
            if(a[j-1]>a[j])
            {
                swap(&a[j-1],&a[j]);
            }
        }
    }
    printf("\n%s",a);
    printf("\n");
    return 0;
}