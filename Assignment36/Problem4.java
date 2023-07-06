/*
A A A A A
B B B B B
C C C C C
*/

import java.lang.*;
import java.util.*;


class Problem4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter No of Row");
		int iRow = sobj.nextInt();
		System.out.println("Enter No of Column");
		int iCol = sobj.nextInt();
		
		int arr[][] = new int[iRow][iCol];
		int iNo =4;
		
		for(int i =0 ; i<iRow ; i++)
		{
			for(int j=0 ; j<iCol ; j++)
			{
					arr[i][j] =iNo;
		
					System.out.print(arr[i][j]+"  ");
			}
			iNo--;
			System.out.println();
		}
	}
}
		