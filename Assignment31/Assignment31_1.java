
import java.lang.*;
import java.util.*;

class StringDemo
{
		public int CountCapital(String str)
		{
			char Arr[] = str.toCharArray();
			int iCount = 0;
			
			for(int i =0 ; i<Arr.length ; i++)
			{
				if(Arr[i]>='A' && Arr[i]<='Z')
				{
					iCount++;
				}
			}
			
			return iCount;
		}
}

class Assignment31_1
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter String");
		String str = sobj.nextLine();
		
		StringDemo sdobj = new StringDemo();
		
		int iRet = sdobj.CountCapital(str);
		
		System.out.println("Number of Capital Word In String :"+iRet);
		
	}
}