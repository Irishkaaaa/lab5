#include <stdio.h> 
#include "calculate.h"

int
main (void)
{
float Numeral; 
char Operation[4]; 
float Result;
 printf("Число: ");
scanf("%f",&Numeral);
printf("Операция (+,-,*,/,pow,sqrt,sin,cos,tan): "); 
scanf("%c",&Operation[0]);
Result = Calculate(Numeral, Operation); 
printf("%6.2f\n",Result);
return 0;
}
