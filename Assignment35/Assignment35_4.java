/*
Accept 1 string from user and reverse that string and toggle it
input:
AbCd
Ouput:
DcBa

*/

import java.lang.*;
import java.util.*;

class Assignment35_4
{
	public static void main(String arg[])
	{
		Scanner sobj  = new Scanner(System.in);
		
		System.out.println("Enter First String");
		String str1 = sobj.nextLine();
		
		StringBuilder sb = new StringBuilder(str1);
		
		StringBuilder str = sb.reverse();
		
		//tring str2 = str.toString()
		char arr[] = .toCharArray();
		
		for(int i=0 ; i<arr.length ; i++)
		{
			if(arr[i]>='A'&& arr[i]<='Z')
			{
				arr[i] = (char)(arr[i]+32);
			}
			else if(arr[i]>='a'&& arr[i]<='z')
			{
				arr[i] = (char)(arr[i]-32);
			}
		}
		
		System.out.println(arr);
			
	}
	
}