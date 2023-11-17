//Maximum element and index in the array
#include<stdio.h>
void main(){
    int n ;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n],max=0,ind=0,i;
    printf("Enter the array elements : ");
    for (i = 0;i<n;i++)
        scanf("%d",&a[i]);
        max=a[0];
        for(i=1;i<n;i++)
        {
            if(max<a[i])
            {
                max=a[i];
                ind=i;
            }
        }
        printf("The maximum number is : %d",max);
        printf("The index of maximum element:%d",ind);
}
