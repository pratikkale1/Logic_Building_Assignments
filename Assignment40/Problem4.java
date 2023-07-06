/*

* * * * * *
* # # # * *
* # # * $ *
* # * $ $ *
* * $ $ $ *
* * * * * *

*/


import java.lang.*;
import java.util.*;

class Pattern
{
		public void DisplayPattern(int iRow, int iCol)
		{
			for(int i =0; i<iRow ; i++)
			{
				for(int j =0 ; j<iCol ; j++)
				{
					if(((i+j)==iCol-1) || i==0 || i ==iCol-1 || j ==iCol-1 || j==0)
					{
						System.out.print("*"+" ");
					}
					else if((i+j)<(iCol-1))
					{
						System.out.print("#"+" ");
					}
					else if((i+j)>(iCol-1))
					{
						System.out.print("$"+" ");
					}
					
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
		
		System.out.println("Enter Number of Row");
		int iRow = sobj.nextInt();

		System.out.println("Enter Number of Column");
		int iCol = sobj.nextInt();
	
		pobj.DisplayPattern(iRow,iCol);
		
	}
}