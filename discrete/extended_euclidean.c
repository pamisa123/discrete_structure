#include<stdio.h>
#include<conio.h>
int gcd(int a,int b)
{
    int q,r,x,y,n1,n2,tn1,tn2;
    int x1=1,y1=0,x2=0,y2=1;
    if(a>b)
    {
       n1=b;
       n2=a;
    }
    else
    {
        n1=a;
        n2=b;
    }
    tn1=n1;
    tn2=n2;
    while(n1!=0)
    {
        q=n2/n1;
        r=n2%n1;
        n2=n1;
        n1=r;
        x=x1-q*x2;
        y=y1-q*y2;
        x1=x2;
        y1=y2;
        x2=x;
        y2=y;
    }
    printf("\nbizouts identity:\n");
    printf("(%d*%d)+(%d*%d)=%d",x1,tn2,y1,tn1,n2);
    printf("\ngcd=%d",n2);
    printf("\nthe coefficient of x=%d y=%d",x1,y1);
}
int main()
{
    int a,b;
    printf("enter two numbers:\n");
    scanf("%d%d",&a,&b);
    gcd(a,b);
    return 0;
}
