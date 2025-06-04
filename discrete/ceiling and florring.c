#include<stdio.h>
#include<conio.h>
int ceil(float num)
{
    int n;
    n=num;
    if (num>n)
    {
        return n+1;
    }
    else
    {
        return n;
    }
}
int floor(float num)
{
    int n;
    n=num;
    if (num<n)
    {
        return n-1;
    }
    else
    {
        return n;
    }
}
int main()
{
    float num;
    printf("enter the number:\n");
    scanf("%f",&num);
    printf("the ceiling fxn is:%d\n",ceil(num));
    printf("the flooring fxn is:%d\n",floor(num));
    return 0;
}
