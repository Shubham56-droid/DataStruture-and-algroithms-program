import java.util.*;
import java.lang.*;
import java.io.*;


class SelectionSort
{
    void sort(int arr[])
    {
        int n = arr.length;
         System.out.print("Array Before Sorting:");
        for (int i=0; i<n; ++i)
            System.out.print(arr[i]+" ");
         System.out.println();
        for (int i = 0; i < n-1; i++)
        {
            int min_idx = i;
            for (int j = i+1; j < n; j++)
                if (arr[j] < arr[min_idx])
                    min_idx = j;
 
            int temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
        System.out.print("Array after Sorting:");
        for (int i=0; i<n; ++i)
            System.out.print(arr[i]+" ");
        System.out.println();
    }
    public static void main(String args[])
    {
        SelectionSort obj = new SelectionSort();
        int arr[] = {27,39,65,5,29,31};
        obj.sort(arr);
    }
}