#include<iostream>
#include<stdlib.h>
using namespace std;

class Sorting
{
    public:
    int* selection_sort(int[],int);
};
int* Sorting::selection_sort(int arr[],int size)
{
    int k=0,temp=0;
    for(int i=0;i<size-1;i++)
    {
        k=i;
        for(int j=i+1;j<size;j++)
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
    Sorting obj;
    int size=0;
    
    cout<<"Enter the size of the array:";
    cin>>size;
    
    int* arr=(int*)malloc(size*sizeof(int));

    cout<<"Enter the elements in the array:";

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    arr=obj.selection_sort(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
   
    return 0;
}