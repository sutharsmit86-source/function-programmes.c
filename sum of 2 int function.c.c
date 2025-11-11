#include<stdio.h>
void sumofnos(n1,n2,sum)
{
    printf("Enter first integers: ");
    scanf("%d",&n1);
    printf("Enter second integers: ");  
    scanf("%d",&n2);
    sum=n1+n2;
    printf("Sum of %d and %d is: %d",n1,n2,sum);
    
} 
int main()  
{ 
    sumofnos();  
    return 0;
}