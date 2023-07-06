import java.lang.*;
import java.util.*;


class BitWise
{
	public int OffBit(int iNo, int iPos)
	{
		int iMask =0X00000001;
		iMask = iMask<<(iPos-1);
		
		int iResult = iNo&(~(iMask));
		
		return iResult;
		
	}
	
}

class Problem2
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number");
		int Value = sobj.nextInt();
	
		System.out.println("Enter Position");
		int Pos = sobj.nextInt();
		
		BitWise bobj = new BitWise();
		
		int iRet = bobj.OffBit(Value,Pos);
			
		System.out.println("Updated Number is "+iRet);	

	}
		
}