#include<stdio.h>
int main()
{
  int num1,num2,num3;
printf("enter three numbers:");
scanf("%if%if%if",&num1,&num2,&num3);
if(num1>=num2&& num1>=num3);
{
printf("The greatest number is num1");
}
else if(num2>=num1&&num2>=num3);
{
printf("The greatest number is num2");
}
else
{
printf("The greatest number is num3");
}
return 0;
}