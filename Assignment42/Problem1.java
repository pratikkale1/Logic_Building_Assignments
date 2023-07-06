
/*
Accept 2 Array From user and return Difference between Summation of Array.

*/

import java.lang.*;
import java.util.*;

class MyArray
{
	private int Arr[];
	private int Brr[];
	private int iSum1;
	private int iSum2;
	private int iDiff;
	
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
	
	public void DiffArray()
	{
		
		for(int i =0; i<Arr.length; i++)
		{
			iSum1 = iSum1+Arr[i];
		}
		
		for(int j =0; j<Brr.length; j++)
		{
			iSum2 = iSum2+Brr[j];		
		}
		
		iDiff = iSum1-iSum2;
		
	}
	
	public void Display()
	{
		System.out.println("Difference is : "+iDiff);		
	}
		
}

class Problem1
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
		mobj.DiffArray();
		
		mobj.Display();
	}
}