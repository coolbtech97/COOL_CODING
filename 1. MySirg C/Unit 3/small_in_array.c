#include<stdio.h>
#include<stdlib.h>
int swap(int*,int*);
int main()
{
    int n,i,j;
    system("cls");
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[n];
    system("cls");
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
    printf("The smallest value is %d\nThe largest value if %d",a[0],a[n-1]);
    printf("\n");
    return 0;
}
int swap(int *p,int *q)
{
    int t=*p;
    *p=*q;
    *q=t;
    return 1;
}