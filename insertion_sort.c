#include<stdio.h>
#include<stdlib.h>

int* insertion_sort(int arr[],int size)
{
    int i=0,j=0,temp=0;
    if(arr==NULL)
    {
        printf("Mamory is not getting allocated!!");
        return NULL;
    }
    for(i=1;i<size;i++)
    {
        temp=arr[i];
        for(j=i-1;(j>=0)&&(temp<arr[j]);j--)
        {
            arr[j+1]=arr[j];
        }
        arr[j+1]=temp;
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
    arr=insertion_sort(arr,size);
    printf("Elements in the array:");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}