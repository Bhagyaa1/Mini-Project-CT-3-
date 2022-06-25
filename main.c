#include<stdio.h>
struct library
{
    int noebk,noejoun,nomag,noeb;
}s;
int max(int a[])
{
    int i,l=0;
    for(i=0;i<4;i++)
    {
        if(a[0]<=a[i])
        l=a[i];
    }
    return l;
}
int min(int a[])
{
    int i,s=0;
    for(i=0;i<4;i++)
    {
        if(a[0]>=a[i])
        s=a[i];
    }
    return s;
}
void disp(int a[])
{
    int i;
    for(i=0;i<4;i++)
    {
        printf("%d\n",a[i]);
    }
}
void srt(int a[])
{
    int i,j,t;
    for(i=0;i<4;i++)
    {
        for(j=(i+1);j<4;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    
    for(i=0;i<4;i++)
    {
        printf("%d\n",a[i]);
    }
}

int main()
{
    int c;
    printf("Enter No.of Books = ");
    scanf("%d",&s.noebk);
    printf("\nEnter No.of E-Journals = ");
    scanf("%d",&s.noejoun);
    printf("\nEnter No of Magazines = ");
    scanf("%d",&s.nomag);
    printf("\nEnter No of E-books = ");
    scanf("%d",&s.noeb);
    int s1[4]={s.noebk,s.noejoun,s.nomag,s.noeb};
    printf("Implement the functions\n(1)Maximum Volume\n(2) Minimum volume or least books\n(3) Display\n(4) Sort by maximum volumes\nEnter your choice ");
    scanf(" %d",&c);
    switch(c)
    {
        case 1: printf("Maximum value ");
        printf("%d ",max(s1));
        break;
        case 2: printf("Minimum value");
        printf("%d ",min(s1));
        break;
        case 3:printf("Display\n");
        disp(s1);
        break;
        case 4:printf("Sort by maximum volumes\n");
        srt(s1);
        break;
        default: printf("Invalid Input");
        }
        return 0;
}