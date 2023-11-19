#include<stdio.h>
void main()
{
    int arr[30],ele,i,found=0,num;
    printf("Enter the size of the array: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter the element arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    printf("\n Enter the element to search");
    scanf("%d",&ele);
    for(i=0;i<num;i++)
    {
       if(arr[i]==ele)
       {
        printf("Element is found at the index %d=%d:\n",i,ele);
        found=1;
        break;
       } 
       
    }
    if(!found)
    printf("Element is not found");
}