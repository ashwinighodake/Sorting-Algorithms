#include<stdio.h>
#include<stdlib.h>
int* bubble_sort(int arr[],int size)
{
    int i=0,j=0,temp=0;
    for(i=1;i<size;i++)
    {
        for(j=0;j<size-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
    }
    return arr;
}
int main()
{
    int size=0,i=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);

    int *arr=NULL;
    arr=(int*)malloc(sizeof(int)*size);

    printf("Enter the elements in the array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",arr+i);
    }
    arr=bubble_sort(arr,size);
    printf("Elements in the array:");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}