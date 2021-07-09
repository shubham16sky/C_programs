
#include <stdio.h>
//Function to find the factorial of a number 
unsigned int factorial(unsigned int n)
{   int fact;
    if (n==0)
    return 1;
    return n * factorial(n-1);
}
//function to find reverse of a number 
int reversDigits(int revNum)
{
	int temp = 0;
	while (revNum > 0) {
		temp = temp * 10 + revNum % 10;
		revNum = revNum / 10;
	}
	return temp;
}
//Driver code 
int main()
{
    int n ;
    int revNumb ;

    printf("Enter the number : ");
    scanf("%d",&n);
    printf("factorial of the given number %d is : %d \n ",n,factorial(n));
    printf("Enter the number which is to be reversed : \n");
    scanf("%d",&revNumb);
    printf("Reverse of the number %d is : %d\n",revNumb,reversDigits(revNumb));

}

