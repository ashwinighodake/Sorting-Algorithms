import java.lang.*;
import java.util.*;

class Insertion_sort
{
    public int[] insertion_sort(int arr[])
    {
        int temp=0,j=0,i=0;
        for(i=1;i<arr.length;i++)
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
        
        int output[];
        Insertion_sort obj=new Insertion_sort();
        output=obj.insertion_sort(arr);
       
        System.out.println("Sorted elements are:");
        for(int i=0;i<size;i++)
        {
           System.out.print(arr[i]+"\t");
        }
       
    }
}