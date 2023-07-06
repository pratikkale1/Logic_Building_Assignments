
/*
Accept character Array From user and replace each capital character with its respective small character.

*/

import java.lang.*;
import java.util.*;

class MyArray
{
	private char Arr[];

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Character of Array");
		
		Arr = sobj.next().toCharArray();	
	}
	
	public  void Display()
	{
		int iCnt=0;
			
		for(int i =0 ; i<Arr.length ;i++)
		{

			System.out.print(Character.toLowerCase(Arr[i]));

		}
	}	
}

class Problem1
{
	public static void main(String Arr[])
	{
		
		MyArray mobj = new MyArray();
		mobj.Accept();
		mobj.Display();


	}
}