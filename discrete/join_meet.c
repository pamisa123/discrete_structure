#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,m,n;
    printf("enter the dimension of first matrix:");
    scanf("%d",&m);
    printf("enter the dimension of second matrix:");
    scanf("%d",&n);
    int a[m][m],b[n][n],c[m][n];
    printf("enter the elements of first matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements of second matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("the matrix after join operation is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]||b[i][j];
            printf("%d",c[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    printf("the matrix after meet operation is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]&&b[i][j];
            printf("%d",c[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
