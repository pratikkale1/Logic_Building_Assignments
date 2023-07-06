
import java.lang.*;
import java.util.*;

class StringDemo
{
		public int CountDiff(String str)
		{
			char Arr[] = str.toCharArray();
			
			int iCntCapital = 0;
			int iCntSmall = 0;
			int iDiff = 0;
			
			for(int i =0 ; i<Arr.length ; i++)
			{
				if(Arr[i]>='a' && Arr[i]<='z')
				{
					iCntSmall++;
				}
			}
			
			
			for(int i =0 ; i<Arr.length ; i++)
			{
				if(Arr[i]>='A' && Arr[i]<='Z')
				{
					iCntCapital++;
				}
			}
			iDiff = iCntSmall-iCntCapital;
			
			return iDiff ;
		}
}

class Assignment31_3
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter String");
		String str = sobj.nextLine();
		
		StringDemo sdobj = new StringDemo();
		
		int iRet = sdobj.CountDiff(str);
		
		System.out.println("Difference is :"+iRet);
		
	}
}