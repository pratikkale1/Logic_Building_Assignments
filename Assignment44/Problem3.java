
/*
Accept character Array From user and Count no of vowel in it.

*/

import java.lang.*;
import java.util.*;

class MyArray
{
	private char Arr[];

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Character of Array");
		
		Arr = sobj.next().toCharArray();
	}
	
	public  int CountVowel(char ch)
	{
		int iCnt=0;
			
		for(int i =0 ; i<Arr.length ;i++)
		{
			Arr[i]=Character.toLowerCase(Arr[i]);
			
			if(Arr[i]==ch)
			{
				iCnt++;
			}
		
		}
		return iCnt;
	}	
}

class Problem3
{
	public static void main(String Arr[])
	{
		Scanner sobj = new Scanner(System.in);
		MyArray mobj = new MyArray();
		mobj.Accept();
		
		System.out.println("Enter one Character that you want find in Array");
		char cValue = sobj.next().charAt(0);
		
		int iRet = mobj.CountVowel(cValue);
		
		System.out.println("Count is : "+iRet);


	}
}