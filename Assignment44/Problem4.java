
/*
Accept character Array From user and return Difference between lowercase and uppercase Character.

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
		int iCnt1=0;
		int iCnt2=0;
			
		for(int i =0 ; i<Arr.length ;i++)
		{
			
			if(Character.isUpperCase(Arr[i]))
			{
				iCnt1++;
			}
			else
			{
				iCnt2++;
			}
		}
		
		return iCnt1-iCnt2;
	}	
}

class Problem4
{
	public static void main(String Arr[])
	{
		
		MyArray mobj = new MyArray();
		mobj.Accept();
		int iRet = mobj.ArrayCapitalCount();
		
		System.out.println("Difference is : "+iRet);

	}
}