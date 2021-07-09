#include <stdio.h>
void main()
{
    int n;
    printf("Eneter the number to be checked : ");
    scanf("%d",&n);
    if((n & 1) == 0)
    {
        printf(" The given number %d is even ",n);
    }else 
    {
        printf("The given  number %d is odd ",n);
    }
}