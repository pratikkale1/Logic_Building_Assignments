/*
Accept 2 Array From user and Copy the content of that array into new array in reverse order and return that array.

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
		
		for(int i = Brr.length-1,I=0; i >= 0 ; i--,I++)
		{
			Crr[I]=Brr[i];
		}
		
		int k = Arr.length;
		
		for(int j =Arr.length-1; j >=0; j--,k++)
		{
			Crr[k]=Arr[j];
			
		}
		return Crr;

	}
	
}

class Problem3
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