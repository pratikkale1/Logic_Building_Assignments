/*
	Accept Number from user and return count of odd Didits.
*/

import java.lang.*;
import java.util.*;

class Digit
{
	public int CountOdd(int no)
	{
		int iDigit =0;
		int Count =0;
		
		while(no != 0)
		{
			iDigit = no%10;
			
			if(iDigit%2 != 0)
			{
				Count++;
			}
			no = no/10;
		}
		
		return Count;
	}
}
class Assignment33_2
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number");
		int iNo = sobj.nextInt();
		
		Digit dobj = new Digit();
		
		int iRet = dobj.CountOdd(iNo);
			
		System.out.println("Number of Odd Digits :"+iRet);	
	}
}