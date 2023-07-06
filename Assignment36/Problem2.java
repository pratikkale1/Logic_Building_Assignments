/*
A B C D
a b c d
A B C D
a b c d

*/


import java.lang.*;
import java.util.*;

class Problem2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter No of Row");
		int iRow = sobj.nextInt();
		System.out.println("Enter No of Column");
		int iCol = sobj.nextInt();
		
		char arr[][] = new char[iRow][iCol];
		char CH ='A';
		char ch ='a';
		
		for(int i =0 ; i<iRow ; i++)
		{
			CH ='A';
			ch ='a';
			for(int j=0 ; j<iCol ; j++)
			{
				if(i%2 == 0)
				{
					arr[i][j] =CH;
					CH++;
					System.out.print(arr[i][j]+"  ");
				}
				else if(i%2 != 0)
				{
					arr[i][j] =ch;
					ch++;
					System.out.print(arr[i][j]+"  ");
				}

			}
			System.out.println();
		}
	}
}
		