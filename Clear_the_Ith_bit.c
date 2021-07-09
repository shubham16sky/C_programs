#include <stdio.h>

int clear_I_th_Bit(int n, int i)
{
    printf("Enter the Given number :");
    scanf("%d",&n);
    printf("Enter the position of the bit to be cleared :");
    scanf("%d",&i);
    int temp = 1 << i;
    int mask = ~(temp);
    int new_number = n & mask;
    printf("The new number obtained after clearing %d bit is : %d",i,new_number);
}

void main()
{
    int i;
    int n;
    clear_I_th_Bit(n,i);
}
