/*
Accept 1 string from user and Check Whether string is palindrome or not without considering its case;
input:
1ABCcba1
Ouput:
true

*/

import java.lang.*;
import java.util.*;

class Assignment35_5
{
	public static void main(String arg[])
	{
		Scanner sobj  = new Scanner(System.in);
		
		System.out.println("Enter First String");
		String stru = sobj.nextLine();
		String str1 = stru.toUpperCase();
		
		StringBuilder sb = new StringBuilder(str1);
		
		StringBuilder str = sb.reverse();
		
		String str2 = str.toString();
		
		
		if(str1.equals(str2))
		{
			System.out.println(true);
		}
		else
		{
			System.out.println(false);
		}
		

	}
	
}