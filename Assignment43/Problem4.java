
/*
Accept Array of Marks from user and Display their class.

88.60 = First class with Distinction
40.88 = Pass Class

*/

import java.lang.*;
import java.util.*;

class MyArray
{
	private float Arr[];
	
	MyArray(int Size)
	{
		Arr = new float[Size];
		
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Marks of Each Student");
		
		for(int i =0; i<Arr.length; i++)
		{
			Arr[i] = sobj.nextFloat();
		}
			
	}
	
	public void DisplayClass()
	{
		int iNo =0;
		int i =0;
		int iSum =0;
		
		for(i =0 ; i<Arr.length ;i++)
		{
			
			if(Arr[i]<35f)
				{System.out.println(Arr[i]+" = "+"Fail");}
			else if(Arr[i]<50f)
				{System.out.println(Arr[i]+" = "+"Pass Class");}
			else if(Arr[i]<60f)
				{System.out.println(Arr[i]+" = "+"Second Class");}
			else if(Arr[i]<=70f)
				{System.out.println(Arr[i]+" = "+"First Class");}
			else if(Arr[i]>70f)
				{System.out.println(Arr[i]+" = "+"First Class With Distinction");}
			else
			{
				System.out.println("invalid Marks");
			}
			
		}
	
	}	
	
}

class Problem4
{
	public static void main(String Arr[])
	{
		Scanner sobj = new Scanner(System.in);
			
		System.out.println("Enter Number of Student");
		int iSize = sobj.nextInt();
		
		
		MyArray mobj = new MyArray(iSize);
		mobj.Accept();
		mobj.DisplayClass();
		

	}
}