/*
	Accept Number from user and return Mutiplication of all  digits
*/

import java.lang.*;
import java.util.*;

class Digit
{
	public int Multiplication(int no)
	{
		int iDigit =0;
		int iMult =1;
		
		while(no != 0)
		{
			iDigit = no%10;

			iMult =iMult*iDigit;
			
			no = no/10;
		}
		
		return iMult;
	}
}
class Assignment33_4
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