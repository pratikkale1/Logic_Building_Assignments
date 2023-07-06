/*
Accept character Array From user and return Count of Capital character.


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
	
	public int ArrayCapitalCount()
	{
		int iCnt=0;
			
		for(int i =0 ; i<Arr.length ;i++)
		{
			
			if(Character.isUpperCase(Arr[i]))
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
		
		MyArray mobj = new MyArray();
		mobj.Accept();
		int iRet = mobj.ArrayCapitalCount();
		
		System.out.println("Total Number of Capital Character in the Array : "+iRet);

	}
}