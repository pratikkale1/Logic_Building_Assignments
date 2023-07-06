/*
Accept 2 string from user and check whether  First N contents of  two String are equal or not.
input:
Marvellous
Marvellous
5
Ouput:
true

*/

import java.lang.*;
import java.util.*;

import java.lang.*;
import java.util.*;

class Assignment35_3
{
	public static void main(String arg[])
	{
		Scanner sobj  = new Scanner(System.in);
		
		System.out.println("Enter First String");
		String str1 = sobj.nextLine();
		System.out.println("Enter Second String");
		String str2 = sobj.nextLine();
		System.out.println("Enter No of Character that you to Check");
		int iNo = sobj.nextInt();
		
		char Arr1[] = str1.toCharArray();
		char Arr2[] = str2.toCharArray();
		int i =0; 
		
		for(i =0 ; i<iNo ; i++)
		{
			if(Arr1[i] != Arr2[i])
			{
				break;
			}
		}
		
		if(i == iNo)
		{
			System.out.println("First "+iNo+" Characters are eual");
		}
		else
		{
			System.out.println("First "+iNo+" Characters are not eual");
		}
		
	}
	
}