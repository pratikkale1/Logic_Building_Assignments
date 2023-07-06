//off 7th bit and return modified number.

import java.lang.*;
import java.util.*;


class BitWise
{
	public int OffBit(int iNo)
	{
		int iMask =64;
		
		int iResult = iNo&(~(iMask));
		
		return iResult;
		
	}
}

class Problem1
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number");
		int value = sobj.nextInt();
		
		BitWise bobj = new BitWise();
		
		int iRet = bobj.OffBit(value);

		System.out.println("Updated bit is :"+iRet);
	}
	
	
}