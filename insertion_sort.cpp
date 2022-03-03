#include<iostream>
using namespace std;

class Sorting
{
    public:
    int* insertion_sort(int[],int);
};
int* Sorting::insertion_sort(int arr[],int size)
{
    int temp=0,i=0,j=0;
    if(arr==NULL)
    {
        cout<<"Memory is not allocated!!";
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
    Sorting obj;
    int size=0;

    cout<<"Enter the size of the array:";
    cin>>size;
    int* arr=new int[size];

    cout<<"Enter the elements in the array:";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    arr=obj.insertion_sort(arr,size);
    cout<<"Elements in the array:";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"\t";
    }
 
    return 0;
}