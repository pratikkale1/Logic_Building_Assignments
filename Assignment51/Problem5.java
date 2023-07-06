// toggle first and last nibble of the numbber and return modified number.


import java.lang.*;
import java.util.*;

class BitWise
{
	public long ToggleBit(long iNo)
	{
		long iMask =0XF000000FL;

		long iResult = iNo^iMask;
		
		return iResult;
		
	}
	
}

class Problem5
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number");
		long Value = sobj.nextLong();
	
		
		BitWise bobj = new BitWise();
		
		long iRet = bobj.ToggleBit(Value);
			
		System.out.println("Updated Number is "+iRet);	

	}
		
}