//	Accept N Numbers  and one Number from user and return index of Last Occurence of that number.


import java.lang.*;
import java.util.*;

class Numbers
{
	public int Check(int no, int Arr[])
	{
		int i =0;
		int LastOcc =0;
		for(i =Arr.length-1 ; i>=0 ; i--)
		{
			if(Arr[i]== no)
			{
				LastOcc =i;
				break;
			}
		}
		
		return LastOcc;
	}
}
class Assignment34_3
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
		
		int iRet = nobj.Check(iNo,Arr);

			System.out.println("index of Last occurence : "+iRet+"th index");
		
	}
}