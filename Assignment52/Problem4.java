
//	Accept no and and 2 position and check whether bit at first and bit at scond position is ON or OFF.

import java.lang.*;
import java.util.*;

class BitWise
{
	public boolean CountOnBit(int iNo, int pos1, int pos2)
	{
		int iMask = 0X00000001;
		int Count = 0;
		int iResult1 =0;
		int iResult2 =0;
		
		for(int i =1 ; i<=32 ; i++)
		{
			
			if(i == pos1)
			{
				iResult1 = iNo & iMask;
				
			}
			else if(i ==pos2)
			{
				iResult2 = iNo & iMask;
			}
			
			iMask = iMask<<1;
		}
		
		if((iResult1 !=0) && (iResult2 != 0))
		{
			return true;
		}
		else
		{
			return false;
		}

	}
}

class Problem4
{
	public static void main(String a[])
	{
		Scanner sobj= new Scanner(System.in);
		
		System.out.println("Enter Number");
		int iValue = sobj.nextInt();
		
		System.out.println("Enter 1st Position");
		int iPos1 = sobj.nextInt();
		
		System.out.println("Enter 2nd Position");
		int iPos2 = sobj.nextInt();
		
		BitWise bobj = new BitWise();
		
		boolean bRet = bobj.CountOnBit(iValue, iPos1, iPos2);
		
		if(bRet == true)
		{
			System.out.println("Bit is on");
		}
		else
		{
			System.out.println("Bit is off");
		}
	}
	
}