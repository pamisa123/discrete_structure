#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,d,g,ans;
    printf("enter the number of nodes:\n");
    scanf("%d",&n);
    printf("enter 1 if directed graph else enter 2 for undirected graph:\n");
    scanf("%d",&g);
    int a[10][10];
    if(g==1)
    {
        printf("for directed graph\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("enter 1 if %d-->%d else enter 0:\t",i,j);
                scanf("%d",&ans);
                if(ans==1)
                {
                    a[i][j]=1;
                }
                else
                {
                    a[i][j]=0;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            int intd=0,outd=0;
            for(j=0;j<n;j++)
            {
                if(a[i][j]==1)
                {
                    ++outd;
                }
                if(a[j][i]==1)
                {
                    ++intd;
                }
            }
            printf("the outdegree of %d node is:%d\n",i,outd);
                printf("the indegree of %d node is:%d\n",i,intd);
        }
    }
    else if(g==2)
    {
        printf("for undirected graph\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("enter 1 if %d has egde on %d \n enter 1 if yes else enter 0 if no:\t",i,j);
                scanf("%d",&ans);
                if(ans==1)
                {
                    a[i][j]=1;
                }
                else
                {
                    a[i][j]=0;
                }
            }
        }
    }
    printf("\nthe matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
