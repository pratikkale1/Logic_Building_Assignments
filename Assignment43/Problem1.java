
/*
Accept Array From user and are reverse each element os that array

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
		int iValue =0;
		
		System.out.println("Elements in the Array");
		for(i =0 ; i<Arr.length ;i++)
		{
			iNo =Arr[i];
			
			while(iNo!=0)
			{
				
				iValue = (iValue*10)+(iNo%10);
				
				iNo = iNo/10;
			}
			
			System.out.print(iValue+" ");
			
			iNo =0;
			iValue =0;
			
		}
	
	}	
	

}

class Problem1
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