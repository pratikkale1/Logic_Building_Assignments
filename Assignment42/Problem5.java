
/*
Accept Array From user and check whether that array and its elements are palindrome or not.

*/

import java.lang.*;
import java.util.*;

class MyArray
{
	private int Arr[];
	private int Brr[];

	
	MyArray(int Size)
	{
		Arr = new int[Size];
		Brr = new int[Size];
		
	}
	
	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		
		System.out.println("Enter Elements of First Array");
		
		for(int i =0; i<Arr.length; i++)
		{
			Arr[i] = sobj.nextInt();
		}
		
		Brr = Arrays.copyOf(Arr,Arr.length);
			
	}
	
	public boolean ChkPallindrome()
	{
		int iNo =0;
		int i =0;
		int iValue =0;
		int iDigit =0;
		
		for(i =0 ; i<Arr.length ;i++)
		{
			iNo =Arr[i];
			
			while(iNo!=0)
			{
				
				iValue = (iValue*10)+(iNo%10);
				
				iNo = iNo/10;
			}
			
			if(iValue != Arr[i])
			{
				break;
				
			}
				
			iNo =0;
			iValue =0;
			
		}
		
		int x =0;
		int y =Arr.length-1;
		int iTemp =0;
		
		while(x<y)
		{
			iTemp = Arr[x];
			Arr[x]=Arr[y];
			Arr[y]=iTemp;
			
			x++;
			y--;
		}
		
		if(i == Arr.length && Arrays.equals(Arr,Brr))
		{
			return true;
		}
		else
		{
			return false;
		}
			
	}	
	

}

class Problem5
{
	public static void main(String Arr[])
	{
		Scanner sobj = new Scanner(System.in);
			
		System.out.println("Enter Size of Array");
		int iSize = sobj.nextInt();
		
		
		MyArray mobj = new MyArray(iSize);
		mobj.Accept();
		
		boolean bRet = mobj.ChkPallindrome();
		
		
		if(bRet == true)
		{
			System.out.println("Array and its Elements are Palindrome");
		}
		else
		{
			System.out.println("Array and its Elements are not Palindrome");
		}
		
		
	}
}