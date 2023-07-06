/*
1  2  3  4
5  6  7  8
9  10 11 12
13 14 15 16
*/

import java.lang.*;
import java.util.*;


class Problem5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter No of Row");
		int iRow = sobj.nextInt();
		System.out.println("Enter No of Column");
		int iCol = sobj.nextInt();
		
		int arr[][] = new int[iRow][iCol];
		int iNo =1;
		
		for(int i =0 ; i<iRow ; i++)
		{
			for(int j=0 ; j<iCol ; j++)
			{
					arr[i][j] =iNo;
					iNo++;
					System.out.print(arr[i][j]+"  ");
			}
			System.out.println();
		}
	}
}
		