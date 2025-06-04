#include<stdio.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int n,r,denominator,numerator;
    printf("enter the values of n and r:");
    scanf("%d%d",&n,&r);
    numerator=fact(n);
    denominator=fact(n-r);
    printf("the permuation is:%d\n",numerator/denominator);
    printf("the combination is:%d\n",numerator/(fact(r)*denominator));
    return 0;
}
