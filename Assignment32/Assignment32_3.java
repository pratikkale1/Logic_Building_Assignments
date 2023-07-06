// Accept N number from user and  Display all such number which is divisble by 5 and Even


import java.lang.*;
import java.util.*;

class ArrayDemo
{
	public void Display(int Arr[])
	{
		
		for(int i =0 ; i<Arr.length ;i++)
		{
			if(Arr[i]%5 == 0 && Arr[i]%2 == 0)
			{
				System.out.print(Arr[i]+" ");
			}

		}
	}	
}
class Assignment32_3
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
		
		aobj.Display(Arr);

	}
}