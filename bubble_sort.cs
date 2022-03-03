using System;

namespace Sorting
{
    class Bubble_Sort
    {
        public int[] bubble_sort(int []arr)
        {
            int temp=0;
            for(int i=1;i<arr.Length;i++)
            {
                for(int j=0;j<arr.Length-i;j++)
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
        static void Main(string []arg)
        {
            Console.WriteLine("Enter the size of the array:");
            int size=Convert.ToInt32(Console.ReadLine());
            
            int []arr=new int[size];
            Console.WriteLine("Enter the elements in the array:");
            for(int i=0;i<size;i++)
            {
                arr[i]=Convert.ToInt32(Console.ReadLine());
            }
            Bubble_Sort obj=new Bubble_Sort();
            arr=obj.bubble_sort(arr);
           
            Console.WriteLine("Sorted elements in the array:");
            for(int i=0;i<size;i++)
            {
                Console.Write(arr[i]+"\t");
            }
          

        }
    }
}