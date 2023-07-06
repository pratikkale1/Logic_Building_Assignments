
/*
Enter Elements of Array
8
9
7
6
1

output:
* * * * * * * *
* * * * * * * * *
* * * * * * *
* * * * * *
*

*/

import java.lang.*;
import java.util.*;

class MyArray
{
	private int Arr[];

	
	MyArray(int Size1)
	{
		Arr = new int[Size1];
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Elements of Array");
		
		for(int i =0; i<Arr.length; i++)
		{
			Arr[i] = sobj.nextInt();
		}
		
	}
	
	public void Display()
	{
		
		for(int i = 0; i<Arr.length ; i++)
		{
			for(int j =1 ; j<=Arr[i] ;j++ )
			{
				System.out.print("*"+" ");
			}
			System.out.println();
		}

	}
	
}

class Problem5
{
	public static void main(String Arr[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Size of First Array");
		int iSize1 = sobj.nextInt();

		MyArray mobj = new MyArray(iSize1);
		mobj.Accept();
		mobj.Display();
	}
}