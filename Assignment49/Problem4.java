
// Write a program which checks whether 7,8,9 bit is On or off.

import java.lang.*;
import java.util.*;

class Bitwise
{
	public boolean CheckBit(int iNo)
	{
		int iMask = 448;
		
			
		int iResult1 = iNo & iMask;

		
		if(iResult1 == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
		
	}
	
}

class Problem4
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