#include<stdio.h>
float div(float,float);
void main()
{
  int a,b,c;
  printf("Enter two numbers: ");
  scanf("%d%d",&a,&b);
  printf("\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n");
  printf("Enter the choice");
  int ch;
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    c=add(a,b);
    printf("Sum=%d",c);
    break;

    case 2:
    c=sub(a,b);
    printf("Sub=%d",c);
    break;

    case 3:
    c=mul(a,b);
    printf("Mul=%d",c);
    break;

    case 4:
    if(b==0)
    printf("infinity");
    else
    {
        float d=div(a,b);
        printf("Div=%f",d);
    }
    break;
     
    default:
    printf("Enter the correct choice: ");
  }
}
int add(int x,int y)
{
    int z=x+y;
    return z;
}
int sub(int x,int y)
{
    int z=x-y;
    return z;
}
int mul(int x,int y)
{
    int z=x*y;
    return z;
}
float div(float x,float y)
{
   float z=x/y;
     return z;
}