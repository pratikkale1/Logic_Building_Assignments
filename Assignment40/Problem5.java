/*
Enter Number of Row
5
Enter Number of Column
5
1 2 3 4 5
1 2     5
1   3   5
1     4 5
1 2 3 4 5

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
				no=1;
				for(int j =0 ; j<iCol ; j++)
				{
					if(i==j || i==0 || i ==iCol-1 || j ==iCol-1 || j==0)
					{
						System.out.print(no+" ");
					}
					else
					{
						System.out.print(" "+" ");
					}
					no++;
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
		
		System.out.println("Enter Number of Row");
		int iRow = sobj.nextInt();

		System.out.println("Enter Number of Column");
		int iCol = sobj.nextInt();
	
		pobj.DisplayPattern(iRow,iCol);
		
	}
}