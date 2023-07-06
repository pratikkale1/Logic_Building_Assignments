/*
Accept 2 Array From user and Display Odd Content of each Array.


*/

import java.lang.*;
import java.util.*;

class MyArray
{
	private int Arr[];
	private int Brr[];
	
	MyArray(int Size1 , int Size2)
	{
		Arr = new int[Size1];
		Brr = new int[Size2];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Elements of First Array");
		
		for(int i =0; i<Arr.length; i++)
		{
			Arr[i] = sobj.nextInt();
		}

		System.out.println("Enter Elements of Second Array");
		
		for(int j =0; j<Brr.length; j++)
		{
			Brr[j] = sobj.nextInt();
		}			
	}
	
	public void DisplayEven()
	{
		System.out.println("Odd Elements of First Array");
		
		for(int i =0; i<Arr.length; i++)
		{
			if(Arr[i]%2 != 0)
			{
				System.out.print(Arr[i]+" ");
			}			
		}
		System.out.println();

		System.out.println("Odd Elements of Second Array");
		
		for(int j =0; j<Brr.length; j++)
		{
			if(Brr[j]%2 != 0)
			{
				System.out.print(Brr[j]+" ");
			}			
		}
		System.out.println();			
	}
	
}

class Problem3
{
	public static void main(String Arr[])
	{
		Scanner sobj = new Scanner(System.in);
			
		System.out.println("Enter Size of First Array");
		int iSize1 = sobj.nextInt();
		
		System.out.println("Enter Size of Second Array");
		int iSize2= sobj.nextInt();
		
		MyArray mobj = new MyArray(iSize1,iSize2);
		mobj.Accept();
		mobj.DisplayEven();
	}
}