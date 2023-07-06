/*
A B C D
A B C D
A B C D

*/


import java.lang.*;
import java.util.*;

class Problem1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter No of Row");
		int iRow = sobj.nextInt();
		System.out.println("Enter No of Column");
		int iCol = sobj.nextInt();
		
		char arr[][] = new char[iRow][iCol];
		char ch ='A';
		
		for(int i =0 ; i<iRow ; i++)
		{
			ch ='A';
			for(int j=0 ; j<iCol ; j++)
			{
				arr[i][j] =ch;
				ch++;
				System.out.print(arr[i][j]+"  ");
			}
			System.out.println();
		}
		
		// for(int i =0 ; i<iRow ; i++)
		// {
			// for(int j=0 ; j<iCol ; j++)
			// {
				// System.out.print(arr[i][j]+"  ");
			// }
			// System.out.println();
		// }
		
	}
}