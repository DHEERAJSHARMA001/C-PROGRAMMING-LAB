#include<stdio.h>
int main()
{
    int num,i=2,c=0;
    scanf("%d",&num);
    while(i<=num)
    {
        if(num%i==0)
        {
            c++;
        }
        i++;
    }
    if(c==1)
    {
        printf("It is a prime");
    }
    else{
        printf("It is not prime");
    }
    return 0;
}