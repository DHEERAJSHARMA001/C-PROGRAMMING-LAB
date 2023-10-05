#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    printf("Enter the co-ordinates of the first point:\n");
    scanf("%d%d",&x1,&y2);
    printf("Enter the co-ordinates of the second point:\n");
    scanf("%d%d",&x2,&y2);
    double d=sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
    printf("The distance between two points in a plane is:%lf",d);
    return 0;

}