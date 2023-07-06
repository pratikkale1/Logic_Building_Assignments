/*
	Accept Number from user and return Difference betwwen Summation of even digits and odd digits.
*/

import java.lang.*;
import java.util.*;

class Digit
{
	public int Multiplication(int no)
	{
		int iDigit =0;
		int ESum =0;
		int OSum =0;
		int iDiff =0;
		
		while(no != 0)
		{
			iDigit = no%10;

			if(iDigit%2 ==0)
			{
				ESum =ESum+iDigit;
			}
			else
			{
				OSum =OSum+iDigit;
			}
			
			no = no/10;
		}
		
		iDiff = ESum-OSum;
		
		return iDiff;
	}
}
class Assignment33_5
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number");
		int iNo = sobj.nextInt();
		
		Digit dobj = new Digit();
		
		int iRet = dobj.Multiplication(iNo);
			
		System.out.println("Mutiplication of all  digits :"+iRet);	
	}
}