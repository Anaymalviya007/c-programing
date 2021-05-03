/*Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Input: x = 123,Input: x = -123*/
#include <stdio.h>
int main()
{
    int n, r, sum = 0;
    printf("\nEnter the Number\n");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    printf("\nthe reverse number is %d\n", sum);

    return 0;
}
