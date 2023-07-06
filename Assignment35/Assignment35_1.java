// Accept 2 string from user and and concate N no of character of second String after Fisrt String.
// Marvellous
// Infosystem
// 4

// Output : Marvellousinfo

import java.lang.*;
import java.util.*;

class Assignment35_1
{
	public static void main(String arg[])
	{
		Scanner sobj  = new Scanner(System.in);
		
		System.out.println("Enter First String");
		String str1 = sobj.nextLine();
		System.out.println("Enter Second String");
		String str2 = sobj.nextLine();
		System.out.println("Enter No of Character that you to concate");
		int iNo = sobj.nextInt();
		
		char Arr[] = str2.toCharArray();
		
		StringBuilder s1 = new StringBuilder(str1);  
        StringBuilder s2 = new StringBuilder(str2); 
        StringBuilder s = new StringBuilder();
		
		for(int i =0 ; i<iNo ; i++)
		{
			s = s1.append(Arr[i]); 
		}
		System.out.println(s.toString());
		
	}
	
}