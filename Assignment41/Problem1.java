
/*
Accept 2 Array From user and Display Content of each Array.

*/

import java.lang.*;
import java.util.*;

class Display
{
	private int Arr[];
	private int Brr[];
	
	Display(int Size1 , int Size2)
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
	
	public void DisplayElement()
	{
		System.out.println("Elements of First Array");
		
		for(int i =0; i<Arr.length; i++)
		{
			System.out.print(Arr[i]+" ");
		}
		System.out.println();

		System.out.println("Elements of Second Array");
		
		for(int j =0; j< Brr.length; j++)
		{
			System.out.print(Brr[j]+" ");
		}
		System.out.println();			
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
		
		Display dobj = new Display(iSize1,iSize2);
		dobj.Accept();
		dobj.DisplayElement();
	}
}