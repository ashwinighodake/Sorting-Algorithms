#include<stdio.h>
#include<stdlib.h>

int* selection_sort(int arr[],int size)
{
    int i,j,k,temp;
    for(i=0;i<size-1;i++)
    {
        k=i;
        for(j=i+1;j<size;j++)
        {
           if(arr[j]<arr[k])
           {
               k=j;
           }
        }
        if(k!=i)
        {
            temp=arr[i];
            arr[i]=arr[k];
            arr[k]=temp;
        }
    }
    return arr;
}
int main()
{
    int size=0,i=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);

    int* arr=(int*)malloc(size*sizeof(int));
    printf("Enter the elements in the array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",arr+i);
    }

    arr=selection_sort(arr,size);
 
    printf("Sorted elements are:");
 
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    
    return 0;
}