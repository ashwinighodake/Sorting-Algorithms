using System;

namespace Sorting
{
    class Insertion_sort
    {
        public int[] insertion_sort(int []arr)
        {
            int temp=0,j=0;
            for(int i=1;i<arr.Length;i++)
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
        static void Main(string []args)
        {
            Console.WriteLine("Enter the size of array:");
            int size=Convert.ToInt32(Console.ReadLine());

            int []arr=new int[size];
            Console.WriteLine("Enter the elements in the array:");
            for(int i=0;i<size;i++)
            {
                arr[i]=Convert.ToInt32(Console.ReadLine());
            }
            Insertion_sort obj=new Insertion_sort();
            arr=obj.insertion_sort(arr);
            for(int i=0;i<size;i++)
            {
                Console.Write(arr[i]+"\t");
            }
            
        }
    }
}