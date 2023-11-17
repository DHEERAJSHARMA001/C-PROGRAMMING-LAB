//Bubble Sort
#include<stdio.h>
void main(){
    int n ;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter the array elements : ");
    for (i = 0;i<n;i++){
        scanf("%d",&a[i]);

    }
    int j;
    for (i = 0;i<n-1;i++){
        int k = 0 ;
        for (j=k+1;j<n-i;j++)
        { 
            if(a[k]>a[j])
            {
                int t=a[k];
                a[k]=a[j];
                a[j]=t;

            }
            k++;
        }
    }
    printf("The Sorted array");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}