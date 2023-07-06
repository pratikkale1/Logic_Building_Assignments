/*
	Accept Number from user and return the count of  digits in between 3 and 7.
*/

import java.lang.*;
import java.util.*;

class Digit
{
	public int CountRange(int no)
	{
		int iDigit =0;
		int Count =0;
		
		while(no != 0)
		{
			iDigit = no%10;
			
			if(iDigit>3 && iDigit<7)
			{
				Count++;
			}
			no = no/10;
		}
		
		return Count;
	}
}
class Assignment33_3
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number");
		int iNo = sobj.nextInt();
		
		Digit dobj = new Digit();
		
		int iRet = dobj.CountRange(iNo);
			
		System.out.println("Count is :"+iRet);	
	}
}