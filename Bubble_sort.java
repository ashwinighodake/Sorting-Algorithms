import java.lang.*;
import java.util.*;

class Bubble_sort
{
    public int[] bubble_sort(int arr[])
    {
        int i=0,j=0,temp=0;
       for(i=1;i<arr.length;i++)
       {
          for(j=0;j<arr.length-i;j++)
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
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int size=sobj.nextInt();

        int arr[]=new int[size];
        System.out.println("Enter the elements int he array:");
        for(int i=0;i<size;i++)
        {
           arr[i]=sobj.nextInt();
        }
        
        Bubble_sort obj=new Bubble_sort();
        arr=obj.bubble_sort(arr);
       
        System.out.println("Sorted elements are:");
        for(int i=0;i<size;i++)
        {
           System.out.print(arr[i]+"\t");
        }
 
    }
    
}
