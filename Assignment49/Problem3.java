
// Write a program which checks whether 7,15,21,28 bit is On or off.

import java.lang.*;
import java.util.*;

class Bitwise
{
	public boolean CheckBit(int iNo)
	{
		int iMask7 = 64;
		int iMask15 = 16384;
		int iMask21 = 1048576;
		int iMask28 = 134217728;
			
		int iResult1 = iNo & iMask7;
		int iResult2 = iNo & iMask15;
		int iResult3 = iNo & iMask21;
		int iResult4 = iNo & iMask28;
		
		if((iResult1 == 0)||(iResult2 == 0)||(iResult3 == 0)||(iResult4 == 0))
		{
			return false;
		}
		else
		{
			return true;
		}
		
	}
	
}

class Problem3
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