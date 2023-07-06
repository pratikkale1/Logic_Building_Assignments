
import java.lang.*;
import java.util.*;

class StringDemo
{
		public int CountSmall(String str)
		{
			char Arr[] = str.toCharArray();
			int iCount = 0;
			
			for(int i =0 ; i<Arr.length ; i++)
			{
				if(Arr[i]>='a' && Arr[i]<='z')
				{
					iCount++;
				}
			}
			
			return iCount;
		}
}

class Assignment31_2
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter String");
		String str = sobj.nextLine();
		
		StringDemo sdobj = new StringDemo();
		
		int iRet = sdobj.CountSmall(str);
		
		System.out.println("Number of Small Word In String :"+iRet);
		
	}
}