#include <stdio.h>
#include <math.h>
 int main()
{
    double Principal;
    printf("Enter the Principal Amount:");
    scanf("%lf",&Principal);
 
    double Rate;
    printf("Enter the Interest Rate:");
    scanf("%lf",&Rate);
 
    double Time;
    printf("Enter the Time Period(in Years):");
    scanf("%lf",&Time);
    double Amount;
    Amount=Principal*pow((1+Rate/100),Time);
 
    double Compound_Interest;
    Compound_Interest=Amount-Principal;
    printf("The Compound Interest is %.2lf",Compound_Interest);
 return 0;
}
