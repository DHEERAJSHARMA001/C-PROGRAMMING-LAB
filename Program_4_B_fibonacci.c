#include<stdio.h>
int main()
{
    int num,first=0,second=1,i,next;
    printf("enter the number:");
    scanf("%d",&num);
    printf("Fibonacci sequence:");
    printf("%d\n %d\n",first ,second);
    for( i=3;i<=num;i++)
    {
    
        next=first+second;
        printf("%d\n",next);
        first=second;
        second=next;
    }   
    
    return 0;
}