#include<iostream>
using namespace std;

class Sorting
{
    public:
    int* bubble_sort(int arr[],int size);
};
int* Sorting::bubble_sort(int arr[],int size)
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
    arr=obj.bubble_sort(arr,size);
   
    cout<<"Enter sorted elements in the array:";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
  
    return 0;
}