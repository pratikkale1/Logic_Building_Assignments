/*
Accept 2 Array From user and form new array wich is Combination of First and Second Array.


*/

import java.lang.*;
import java.util.*;

class MyArray
{
	private int Arr[];
	private int Brr[];
	private int Crr[];
	
	MyArray(int Size1 , int Size2)
	{
		Arr = new int[Size1];
		Brr = new int[Size2];
		Crr = new int[Size1+Size1];
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
	
	public int[] ArrayConcate()
	{
		
		for(int i =0; i<Arr.length; i++)
		{
			Crr[i]=Arr[i];
		}
		
		int k = Arr.length;
		
		for(int j =0; j<Brr.length; j++,k++)
		{
			Crr[k]=Brr[j];
			
		}
		
		return Crr;

	}
	
}

class Problem4
{
	public static void main(String Arr[])
	{
		Scanner sobj = new Scanner(System.in);
		int Crr[];
		
		
		System.out.println("Enter Size of First Array");
		int iSize1 = sobj.nextInt();
		
		System.out.println("Enter Size of Second Array");
		int iSize2= sobj.nextInt();
		
		Crr= new int[iSize1+iSize2];
		
		MyArray mobj = new MyArray(iSize1,iSize2);
		mobj.Accept();
		Crr = mobj.ArrayConcate();
		
		System.out.println("New Concate Array");
		
		for(int i =0; i<Crr.length; i++)
		{
			System.out.println(Crr[i]);	
		}
		
		
	}
}