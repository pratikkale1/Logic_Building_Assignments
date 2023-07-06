
//	Accept N Numbers  and Range from user and Display numbers from that range


import java.lang.*;
import java.util.*;

class Numbers
{
	public void Display(int start,int End, int Arr[])
	{
		int i =0;
		for(i =Arr.length-1 ; i>=0 ; i--)
		{
			if(Arr[i]>start && Arr[i]<End)
			{
				System.out.println(Arr[i]);
			}
		}
		
	}
}
class Assignment34_4
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Range");
		System.out.println("Starting Point");
		int iStart = sobj.nextInt();
		
		System.out.println("Ending Point");
		int iEnd = sobj.nextInt();
		
		System.out.println("Enter How many Numbers you want to add");
		int iSize = sobj.nextInt();
		
		int Arr[] = new int[iSize];
		
		System.out.println("Enter "+iSize+" Numbers");
		
		for(int i =0 ; i<Arr.length ; i++)
		{
			Arr[i] = sobj.nextInt();
		}
		
		Numbers nobj = new Numbers();
		
		nobj.Display(iStart,iEnd,Arr);
		
	}
}