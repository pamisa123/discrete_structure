#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,a[5][8];
    a[0][0]="P";
    a[0][1]="Q";
    a[0][2]="~P";
    a[0][3]="~Q";
    a[0][4]="P^Q";
    a[0][5]="PVQ";
    a[0][6]="P-->Q";
    a[0][7]="P<-->Q";
    a[1][0]=a[2][0]="T";
    a[3][0]=a[4][0]="F";
    a[1][1]=a[3][1]="T";
    a[2][1]=a[4][1]="F";

    for(i=1;i<5;i++)
    {
        //negation p
        if(a[i][0]=="T")
        {
            a[i][2]="F";
        }
        else
        {
            a[i][2]="T";
        }
        //q
        if(a[i][1]=="T")
        {
            a[i][3]="F";
        }
        else
        {
            a[i][3]="T";
        }
        //conjuction
        if(a[i][0]=="T" && a[i][1]=="T")
        {
            a[i][4]="T";
        }
        else
        {
            a[i][4]="F";
        }
        //disjunction
        if(a[i][0]=="F" && a[i][1]=="F")
        {
            a[i][5]="F";
        }
        else
        {
            a[i][5]="T";
        }
        //implication
        if(a[i][0]=="T" && a[i][1]=="F")
        {
            a[i][6]="F";
        }
        else
        {
            a[i][6]="T";
        }
        //bi-implication
        if(a[i][0]==a[i][1])
        {
            a[i][7]="T";
        }
        else
        {
            a[i][7]="F";
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<8;j++)
        {
            printf("\t %s",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
