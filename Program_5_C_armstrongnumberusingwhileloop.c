#include<stdio.h>
#include<math.h>
int main()
{
    int num,digit,original,sum=0,count=0;
    scanf("%d",&num);
    original=num;
    while(original!=0)
    {
     original/=10;
        count++;
    }
    original=num;
    while(original!=0)
    {
        digit=original%10;
       sum+=pow(digit,count);
        original/=10;
    }
    if(sum==num)
    {
        printf("It is an armstrong number");
    }
    else
    {
        printf("It is not an armstrong number");
    }
    return 0;
}