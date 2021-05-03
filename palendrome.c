/*Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward. For example, 121 is palindrome while 123 is not.*/
#include <stdio.h>
int main()
{
    int n, r, sum = 0, X;
    printf("\nEnter the Number\n");
    scanf("%d", &n);
    X = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    n = X;
    if (n == sum)
    {
        printf("it is a PALINDROME");
    }
    else
    {
        printf("not a PALINDROME");
    }

    return 0;
}
