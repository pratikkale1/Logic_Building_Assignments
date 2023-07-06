/*
Accept 2 string from user and check whether  contents of  two String are equal or not.
input:
Marvellous infosystem
Marvellous infosystem
Ouput:
true.
*/

import java.lang.*;
import java.util.*;

class Assignment35_2
{
	public static void main(String arg[])
	{
		Scanner sobj  = new Scanner(System.in);
		
		System.out.println("Enter First String");
		String str1 = sobj.nextLine();
		System.out.println("Enter Second String");
		String str2 = sobj.nextLine();

		// if(str1.equals(str2))
		// {
			// System.out.println("Strings are equal ");
		// }
		// else
		// {
			// System.out.println("Strings are not equal ");
		// }
		
		
		if((str1.compareToIgnoreCase(str2))==0)
		{
			System.out.println("Strings are equal ");
		}
		else
		{
			System.out.println("Strings are not equal ");
		}
		
	}
	
}