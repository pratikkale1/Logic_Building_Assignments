/*

input = Hello

H # # # #
H e # # #
H e l # #
H e l l #
H e l l o
H e # # #
H e l # #
H e l l #
H e l l o

*/


import java.lang.*;
import java.util.*;

class Pattern
{
	public void DisplayPattern(String str)
	{
		char Arr[] = str.toCharArray();
		int no =Arr.length;
		
		for(int i =0; i<Arr.length ; i++)
		{
			for(int j =0 ; j<Arr.length ; j++)
			{
				if( i > j || i==j)
				{
					System.out.print(Arr[j]+" ");
				}
				else
				{
					System.out.print("#"+" ");	
				}
			}
			System.out.println();
		}

		for(int i =1; i<Arr.length ; i++)
		{
			for(int j =0 ; j<Arr.length ; j++)
			{
				if( i > j || i==j)
				{
					System.out.print(Arr[j]+" ");
				}
				else
				{
					System.out.print("#"+" ");	
				}
			}
			System.out.println();
		}		
		
	}
}

class Problem5
{
	public static void main(String a[])
	{
		Pattern pobj = new Pattern();
		
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter String");
		String str = sobj.nextLine();
		
		pobj.DisplayPattern(str);
		
	}
}