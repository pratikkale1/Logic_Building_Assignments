/*
Accept 2 Array From user and Display Summation of Elements of each Array.


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
	
		int iSum1=0,iSum2=0;
		
		for(int i =0; i<Arr.length; i++)
		{
			iSum1 = iSum1+Arr[i];
		}
		
		for(int j =0; j<Brr.length; j++)
		{
			iSum2 = iSum2+Brr[j];		
		}
		
		System.out.println("Summation of First Array : "+iSum1);
		System.out.println("Summation of Second Array : "+iSum2);
				
	}
	
}

class Problem5
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