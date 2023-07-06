/*

input = Hello

H e l l o
H e l l *
H e l * *
H e * * *
H * * * *

00 01 02 03
10 11 12 13
20 21 22 23
30 31 32 33

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
				if((i+j)<=(Arr.length-1))
				{
					System.out.print(Arr[j]+" ");
				}
				else
				{
					System.out.print("*"+" ");	
				}
			}
			System.out.println();
		}
		
	}
}

class Problem2
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