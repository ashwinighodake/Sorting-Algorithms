using System;

namespace Sorting
{
    class Selection_Sort
    {
        public int[] selection_sort(int []arr)
        {
            int i,j,k,temp;
            for(i=0;i<arr.Length-1;i++)
            {
                k=i;
               for(j=i+1;j<arr.Length;j++)
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
        static void Main(string []arg)
        {
            Console.WriteLine("Enter the size of the array:");
            int size=Convert.ToInt32(Console.ReadLine());

            int []arr=new int[size];
            Console.WriteLine("Enter the elements in the list");
            for(int i=0;i<size;i++)
            {
                arr[i]=Convert.ToInt32(Console.ReadLine());
            }
            int []brr=new int[size];
            Selection_Sort obj=new Selection_Sort();
            brr=obj.selection_sort(arr);
            for(int i=0;i<size;i++)
            {
                Console.Write(brr[i]+"\t");
            }

        }
    }
}