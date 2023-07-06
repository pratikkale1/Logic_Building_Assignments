// Accept N number from user and  return difference between summation  of even elements  and summation of odd elements.

import java.lang.*;
import java.util.*;

class ArrayDemo
{
	public int Difference(int Arr[])
	{
		int ESum =0;
		int OSum =0;
		int Diff =0;
		
		for(int i =0 ; i<Arr.length ;i++)
		{
			if(Arr[i]%2 == 0)
			{
				ESum = ESum+Arr[i];
			}
			else 
			{
				OSum = OSum+Arr[i];
			}
		}
			
			Diff = ESum - OSum;
			
			return Diff;
	}
}
class Assignment32_1
{
	public static void main(String a[])
	{
		Scanner sobj = new Scanner(System.in);
		
		ArrayDemo aobj = new ArrayDemo();
		
		System.out.println("How many number that you want add");
		int Size =  sobj.nextInt();
		
		System.out.println("Enter Numbers");
	
		int Arr[] = new int[Size];
		
		for(int i =0 ; i<Arr.length ;i++)
		{
			Arr[i] = sobj.nextInt();
		}
		
		int iRet = aobj.Difference(Arr);
		
		System.out.println("Difference between Even and odd Number : "+iRet);
		
	}
}