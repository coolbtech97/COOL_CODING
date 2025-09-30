#include<stdio.h>
struct emp
{
    int id,sallery;
    char name[21];
};
int main()
{
    int i,n;
    system("cls");
    printf("Enter the number of employs : ");
    scanf("%d",&n);
    struct emp a[n];
    system("cls");
    for(i=0;i<n;i++)
    {
        printf("Enter the name of employ %d : ",i+1);
        fgets(a[i].name,20,stdin);
        printf("Enter the id of employ %d : ",i+1);
        scanf("%d",&a[i].id);
        printf("Enter the sallery of employ %d : ",i+1);
        scanf("%d",&a[i].sallery);
    }
    int max=a[0].sallery,c=0;
    for(i=0;i<n;i++)
    {
        if(a[i].sallery>max)
        {
            max=a[i].sallery;
        }
    }
    for(i=0;i<n;i++)
    {
        if(max==a[i].sallery)
        {
            if(c==1)
            {
                printf("\nAnd");
            }
            printf("The employ with highest sallery is %s with sallery %d",a[i].name,a[i].sallery);
            c=1;
        }
    }
    return 0;
}