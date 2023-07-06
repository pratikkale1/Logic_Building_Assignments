/*

input = Hello

H
H e
H e l
H e l l
H e l l o
H e l l
H e l
H e
H

*/


import java.lang.*;
import java.util.*;

class Pattern
{
		public void DisplayPattern(String str)
		{
			char Arr[] = str.toCharArray();
			int no =Arr.length;
			
			for(int i =0; i<Arr.length-1 ; i++)
			{
				for(int j =0 ; j<=i ; j++)
				{
					System.out.print(Arr[j]+" ");
				}
				System.out.println();
			}
			
			for(int i =0; i<Arr.length ; i++)
			{
				for(int j =0 ; j<no ; j++)
				{
					System.out.print(Arr[j]+" ");
					
				}
				no--;
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