#include <stdio.h>

int main()
{
    float basic , gross , da , hra , net , pf;
    char name[50];
    printf("enter the name  of the employee : ");
    scanf("%s",&name);
    printf("Enter the basic salary : ");
    scanf("%f", &basic);
    pf = 0.08 * basic ;

    if (basic < 5000)
    {
    da = 0.3 * basic;
    hra = 0.08 * basic;
    }
    else if ((basic >= 5000) && (basic < 10000))
    {
    da = 0.4 * basic;
    hra = 0.1 * basic;
    }
    else
    {
    da = 0.5 * basic;
    hra = 0.2 * basic;
    }
    gross = basic + da + hra;
    net = gross  + pf;
    printf("Gross salary of the employee %s is : %f\n",name,gross);
    printf("Net salary of the employee %s is  : %f",name,net);
    return 0;
}

