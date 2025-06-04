#include<stdio.h>
#include<conio.h>
int gcd(int a,int b)
{
    int temp=a;
    a=b%a;
    b=temp;
    if(a==0)
    {
        return b;
    }
    else
    {
        return gcd(a,b);
    }
}
int main()
{
    int a,b;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("the hcf of two numbers is:%d",gcd(b,a));
    }
    else
    {
        printf("the hcf of two numbers is:%d",gcd(a,b));
    }
}
