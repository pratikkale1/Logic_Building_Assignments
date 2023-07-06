//	Accept N Numbers  from user and return product of odd number.

import java.lang.*;
import java.util.*;

class Numbers
{
	public int Product(int Arr[])
	{
		int i =0;
		int iMult =1;
		for(i =0 ; i<Arr.length ; i++)
		{
			if(Arr[i]%2 != 0)
			{
				iMult =iMult*Arr[i];
			}
		}
		return iMult;
	}
}
class Assignment34_5
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter How many Numbers you want to add");
		int iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		
		System.out.println("Enter "+iSize+" Numbers");
		
		for(int i =0 ; i<Arr.length ; i++)
		{
			Arr[i] = sobj.nextInt();
		}
		
		Numbers nobj = new Numbers();
		
		int iRet = nobj.Product(Arr);
		
		System.out.println("Product of odd numbers :"+iRet);
		
	}
}