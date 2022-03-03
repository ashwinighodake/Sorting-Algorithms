import java.lang.*;
import java.util.*;

class selection_sort
{
    public int[] Selection_Sort(int arr[])
    {
        int i,j,temp,k;
        for(i=0;i<arr.length-1;i++)
        {
            k=i;
            for(j=i+1;j<arr.length;j++)
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
    public static void main(String arg[])
    {
        Scanner sobj=new Scanner(System.in);
        System.out.println("Enter the size of the array:");
        int size=sobj.nextInt();
        
        int arr[]=new int[size];
        System.out.println("Enter the elements in the array:");
        for(int i=0;i<size;i++)
        {
            arr[i]=sobj.nextInt();
        }
        selection_sort obj=new selection_sort();
        int brr[]=new int[size];
        brr=obj.Selection_Sort(arr);
        System.out.println("Sorted elements are:");
        for(int i=0;i<size;i++)
        {
            System.out.print(brr[i]+"\t");
        }
    }
    
}
