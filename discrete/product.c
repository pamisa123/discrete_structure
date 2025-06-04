#include<stdio.h>
#include<conio.h>
int main()
{
    int m,n,x,y,k,i,j;
    printf("enter the dimension of first matrix:\n");
    scanf("%d%d",&m,&n);
    printf("enter the dimension of second matrix:\n");
    scanf("%d%d",&x,&y);
    int a[m][n],b[x][y],c[m][y];
    printf("enter the elements of first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of second matrix:\n");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=x)
    {
        printf("the multiplication cant occur between matrices");
    }
    else
    {
        printf("the multiplication is:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<y;j++)
            {
                int sum=0;
                for(k=0;k<n;k++)
                {
                    sum=sum||(a[i][k]&&b[k][j]);
                }
                c[i][j]=sum;
                printf("%d",c[i][j]);
                printf("\t");
            }
            printf("\n");
        }
    }
    return 0;
}
