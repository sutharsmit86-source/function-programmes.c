#include<stdio.h>
void factorial(int n, int *fact)
{
    *fact = 1;
    for(int i=1; i<=n; i++)
    {
        *fact = (*fact) * i;
    }
}   
int main()
{
    int num, fact;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    factorial(num,&fact);
    printf("Factorial of %d is: %d\n", num, fact);
    return 0;
}