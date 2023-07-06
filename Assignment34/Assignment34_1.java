//	Accept N Numbers  and one Number from user and Check whether that number is present or not.

import java.lang.*;
import java.util.*;

class Numbers
{
	public boolean Check(int no, int Arr[])
	{
		int i =0;
		for(i =0 ; i<Arr.length ; i++)
		{
			if(Arr[i]== no)
			{
				break;
			}
		}
		
		if(i ==Arr.length)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}
class Assignment34_1
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Number");
		int iNo = sobj.nextInt();
		
		System.out.println("Enter How many Numbers you want to add");
		int iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		
		System.out.println("Enter "+iSize+" Numbers");
		
		for(int i =0 ; i<Arr.length ; i++)
		{
			Arr[i] = sobj.nextInt();
		}
		
		Numbers nobj = new Numbers();
		
		boolean iRet = nobj.Check(iNo,Arr);
		
		if(iRet ==true)
		{
			System.out.println("Number is Present");
		}
		else
		{
			System.out.println("Number is not Present");
		}
	}
}