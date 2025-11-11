#include<stdio.h>
void sumofarrays(int arr1[5],int sum)
{
    printf("Enter elements of array:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr1[i]);
        sum=sum+arr1[i];
    }
    printf("Sum of array elements is: %d",sum);
}
int main()
{
    int arr1[5],sum=0;
    sumofarrays(arr1,sum);
    return 0;
}