//Program for arithmetic operation 
#include<stdio.h>
void main()
{
    float a,b,sum,sub,divide,multi;
    printf("Enter two number");
    scanf("%f %f",&a,&b);
    sum=(a+b);
    printf("sum=%f\n",sum);
    sub=(a-b);
    printf("sub=%f\n",sub);
    divide=(a/b);
    printf("divide=%f\n",divide);
    multi=(a*b);
    printf("multi=%f\n",multi);

}