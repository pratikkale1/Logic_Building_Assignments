/*

input = Hello

H e l l o
H e l l
H e l
H e
H
H e
H e l
H e l l
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
			
			for(int i =1; i<Arr.length ; i++)
			{
				for(int j =0 ; j<no ; j++)
				{
					System.out.print(Arr[j]+" ");
					
				}
				no--;
				System.out.println();
			}
			
			for(int i =0; i<Arr.length ; i++)
			{
				for(int j =0 ; j<=i ; j++)
				{
					System.out.print(Arr[j]+" ");
				}
				System.out.println();
			}
			
		}
}

class Problem4
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