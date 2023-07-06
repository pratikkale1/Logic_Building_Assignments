//toggle 7th and 10th bit and return modified number.


import java.lang.*;
import java.util.*;

class BitWise
{
	public int ToggleBit(int iNo)
	{
		int iMask =0X00000240;
		
		int iResult = iMask^iNo;
		
		return iResult;
		
	}
}

class Problem4
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number");
		int value = sobj.nextInt();
		
		BitWise bobj = new BitWise();
		
		int iRet = bobj.ToggleBit(value);

		System.out.println("Updated bit is :"+iRet);
	}
	
	
}