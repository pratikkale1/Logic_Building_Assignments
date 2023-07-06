/*
Accept Array From user and replace each elements with its summation of its digits.


*/

import java.lang.*;
import java.util.*;

class MyArray
{
	private int Arr[];
	private int Brr[];

	
	MyArray(int Size)
	{
		Arr = new int[Size];
		Brr = new int[Size];
		
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Elements of First Array");
		
		for(int i =0; i<Arr.length; i++)
		{
			Arr[i] = sobj.nextInt();
		}
			
	}
	
	public void ReverseElement()
	{
		int iNo =0;
		int i =0;
		int iSum =0;
		
		System.out.println("Elements in the Array");
		for(i =0 ; i<Arr.length ;i++)
		{
			iNo =Arr[i];
			
			while(iNo!=0)
			{
				
				iSum = iSum+(iNo%10);
				
				iNo = iNo/10;
			}
			
			Arr[i]=iSum;
			System.out.print(Arr[i]+" ");
			
			iNo =0;
			iSum =0;
			
		}
	
	}	
	

}

class Problem2
{
	public static void main(String Arr[])
	{
		Scanner sobj = new Scanner(System.in);
			
		System.out.println("Enter Size of Array");
		int iSize = sobj.nextInt();
		
		
		MyArray mobj = new MyArray(iSize);
		mobj.Accept();
		mobj.ReverseElement();
		

	}
}