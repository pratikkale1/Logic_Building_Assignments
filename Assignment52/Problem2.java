//	Accept 2 no and Dislay Position of Common on Bits 


import java.lang.*;
import java.util.*;

class BitWise
{
	public int CountOnBit(int iNo1 , int iNo2)
	{
		int iMask = 0X00000001;
		int Count = 0;
		for(int i =1 ; i<=32 ; i++)
		{
			int iResult1 = iNo1 & iMask;
			int iResult2 = iNo1 & iMask;
			
			if(iResult1 !=0 && iResult1 !=0)
			{
				System.out.println("Position of Common on Bits : "+i);
			}
			
			iMask = iMask<<1;	
		}

		return Count;
	}
}

class Problem2
{
	public static void main(String a[])
	{
		Scanner sobj= new Scanner(System.in);
		
		System.out.println("Enter First Number");
		int iValue1 = sobj.nextInt();
		
		System.out.println("Enter Second Number");
		int iValue2 = sobj.nextInt();
		
		BitWise bobj = new BitWise();
		
		bobj.CountOnBit(iValue1,iValue2);
		
	}
	
}