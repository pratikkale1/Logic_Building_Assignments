
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
	
	public  int CountVowel()
	{
		int iCnt=0;
			
		for(int i =0 ; i<Arr.length ;i++)
		{
			Arr[i]=Character.toLowerCase(Arr[i]);
			
			if(Arr[i]=='a'||Arr[i]=='e'||Arr[i]=='i'||Arr[i]=='o'||Arr[i]=='u')
			{
				iCnt++;
			}
		
		}
		return iCnt;
	}	
}

class Problem2
{
	public static void main(String Arr[])
	{
		
		MyArray mobj = new MyArray();
		mobj.Accept();
		
		int iRet = mobj.CountVowel();
		
		System.out.println("Count of Vowel : "+iRet);


	}
}