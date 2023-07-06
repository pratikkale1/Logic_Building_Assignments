/*
Accept 2 Array From user and Display Minimum element of each Array.

*/


import java.lang.*;
import java.util.*;

class MyArray
{
	private int Arr[];
	private int Brr[];
	private int iMin1;
	private int iMin2;
	
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
	
	public void DisplayMinimum()
	{
		iMin1 =Arr[0];
		
		for(int i =0; i<Arr.length; i++)
		{
			if(iMin1>Arr[i])
			{
				iMin1 =Arr[i];
			}
		}
		
		System.out.println("Smallest Element of First Array : "+iMin1);
		
		iMin2 =Brr[0];
		for(int j =0; j<Brr.length; j++)
		{
			if(iMin2>Brr[j])
			{
				iMin2 =Brr[j];
			}	
		}
		
		System.out.println("Smallest Element of Second Array : "+iMin2);
		
	}
	
}

class Problem2
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
		mobj.DisplayMinimum();
		
	}
}