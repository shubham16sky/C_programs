// program to find number of set bits of a given integer(Kernighan's Algorithm)
#include <stdio.h>
int kernighan_algorithm(int n)
{
    printf("Enter the number : ");
    scanf("%d",&n);
    int counter = 0;
    while(n!=0)
    {
    int rmsb = n & -n;
    n = n-rmsb;
    
    counter ++;
    }
    printf("The number of set bits in the given number %d is %d ",n,counter);
}

void main()
{
    int n;
    kernighan_algorithm(n);
}