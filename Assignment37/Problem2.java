/*

1 2 3
1 2 3
1 2 3
1 2 3

*/


import java.lang.*;
import java.util.*;

class Pattern
{
		public void DisplayPattern(int iRow, int iCol)
		{
			int no=0;
			
			for(int i =0; i<iRow ; i++)
			{
				no =1;
				
				for(int j =0 ; j<iCol ; j++)
				{
					System.out.print(no+" ");
					no++;
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
		
		System.out.println("Enter Number of Row");
		int iRow = sobj.nextInt();

		System.out.println("Enter Number of Column");
		int iCol = sobj.nextInt();
	
		pobj.DisplayPattern(iRow,iCol);
		
	}
}