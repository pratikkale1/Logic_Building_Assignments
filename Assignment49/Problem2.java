
// Write a program which checks whether 5th and 18th bit is On or off.

import java.lang.*;
import java.util.*;

class Bitwise
{
	public boolean CheckBit(int iNo)
	{
		int iMask1 = 131072;
		int iMask2 = 16;
			
		int iResult1 = iNo & iMask1;
		int iResult2 = iNo & iMask2;
		
		if((iResult2 == 0)&&(iResult1 == 0))
		{
			return false;
		}
		else if(iResult1 !=0 && iResult2 == 0)
		{
			System.out.println("only 18th bit is on");
			return true;
		}
		else if(iResult2 !=0 && iResult1 == 0)
		{
			System.out.println("only 5th bit is on");
			return true;
		}
		else
		{
			return true;
		}
		
	}
	
}

class Problem2
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);	
		
		System.out.println("Enter Number");
		int value = sobj.nextInt();
		
		Bitwise bobj = new Bitwise();
		
		boolean bRet = bobj.CheckBit(value);

		if(bRet == true)
		{
			System.out.println("Bit is on");
		}
		else
		{
			System.out.println("Bit is Off");
		}
		
		
	}
	
}