// Write a program which checks whether 7,8,9 bit is On or off.

import java.lang.*;
import java.util.*;

class Bitwise
{
	public boolean CheckBit(long iNo)
	{
		long iMask = 2147483649L;
		
			
		long iResult1 = iNo & iMask;

		
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


class Problem5
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);	
		
		System.out.println("Enter Number");
		long value = sobj.nextLong();
		
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