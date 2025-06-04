#include <stdio.h>
#include <conio.h>

int addition(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = (a & b) << 1; // Calculate the carry
        a = a ^ b;        // Calculate the sum without carry
        b = c;            // Assign carry to b for the next iteration
    }
    return a;
}

int subtraction(int a, int b)
{
    int carry;
    b = addition(~b, 1); // Take two's complement of b
    while (b != 0)
    {
        carry = (a & b) << 1; // Calculate the carry
        a = a ^ b;            // Calculate the sum without carry
        b = carry;            // Assign carry to b for the next iteration
    }
    return a;
}

int main()
{
    int n1, n2;
    printf("Enter the first integer:\n");
    scanf("%d", &n1);
    printf("Enter the second integer:\n");
    scanf("%d", &n2);

    printf("The binary addition is: %d\n", addition(n1, n2));
    printf("The binary subtraction is: %d", subtraction(n1, n2));
    return 0;
}
