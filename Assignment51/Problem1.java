import java.lang.*;
import java.util.*;


class BitWise
{
	public boolean CheckBit(int iNo, int iPos)
	{
		int iMask =0X00000001;
		iMask = iMask<<(iPos-1);
		
		int iResult =iNo & iMask;
		
		if(iResult == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
		
	}
	
}

class Problem1
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("enter Number");
		int Value = sobj.nextInt();
	
		System.out.println("enter Position");
		int Pos = sobj.nextInt();
		
		BitWise bobj = new BitWise();
		
		boolean bRet = bobj.CheckBit(Value,Pos);
		
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