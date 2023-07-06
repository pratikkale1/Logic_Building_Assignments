
//on first 4 bits and return modified number.

import java.lang.*;
import java.util.*;

class BitWise
{
	public int OnBit(int iNo)
	{
		int iMask =0X00000000F;
		
		int iResult = iMask|iNo;
		
		return iResult;
		
	}
}

class Problem5
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number");
		int value = sobj.nextInt();
		
		BitWise bobj = new BitWise();
		
		int iRet = bobj.OnBit(value);

		System.out.println("Updated bit is :"+iRet);
	}
	
	
}