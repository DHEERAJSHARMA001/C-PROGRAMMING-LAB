//Pass by reference
#include<stdio.h>
int swap(int*,int*);
int main()
{
    int a=10,b=20;
    printf("a=%d b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swapping:");
    printf("\na=%d b=%d",a,b);
}
int swap(int *x,int*y){
    int t;
    t=*x;
    *x=*y;
    *y=t;
    printf("\nAfter swapping :");
    printf("\nx=%d y=%d",x,y);
}
