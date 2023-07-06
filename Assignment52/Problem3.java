
//	Accept no and and check whether 9th and 12th bit is ON or OFF;

import java.lang.*;
import java.util.*;

class BitWise
{
	public boolean CountOnBit(int iNo)
	{
		int iMask = 0X00000900;
		
			int iResult = iNo & iMask;
			
			if(iResult != 0)
			{
				return true;
			}
			else
			{
				return false;
			}

	}
}

class Problem3
{
	public static void main(String a[])
	{
		Scanner sobj= new Scanner(System.in);
		
		System.out.println("Enter Number");
		int iValue = sobj.nextInt();
		
		BitWise bobj = new BitWise();
		
		boolean iRet = bobj.CountOnBit(iValue);
		
		if(iRet == true)
		{
			System.out.println("Bit is on");
		}
		else
		{
			System.out.println("Bit is off");
		}
	}
	
}