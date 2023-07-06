//	Accept no and count no of on bits


import java.lang.*;
import java.util.*;

class BitWise
{
	public int CountOnBit(int iNo)
	{
		int iMask = 0X00000001;
		int Count = 0;
		for(int i =1 ; i<=32 ; i++)
		{
			int iResult = iNo & iMask;
			
			if(iResult !=0)
			{
				Count++;
			}
			
			iMask = iMask<<1;	
		}

		return Count;
	}
}

class Problem1
{
	public static void main(String a[])
	{
		Scanner sobj= new Scanner(System.in);
		
		System.out.println("Enter Number");
		int iValue = sobj.nextInt();
		
		BitWise bobj = new BitWise();
		
		int iRet = bobj.CountOnBit(iValue);
		
		System.out.println("Count of On Bits : "+iRet);
		
	}
	
}