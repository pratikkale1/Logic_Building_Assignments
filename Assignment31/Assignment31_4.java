
import java.lang.*;
import java.util.*;

class StringDemo
{
		public boolean ChkVowel(String str)
		{
			char Arr[] = str.toCharArray();
			int i =0;
			
			for(i =0 ; i<Arr.length ; i++)
			{
				if(Arr[i]=='a'||Arr[i]=='e' ||Arr[i]=='i' ||Arr[i]=='o' ||Arr[i]=='u'||Arr[i]=='A' ||Arr[i]=='E' ||Arr[i]=='I' ||Arr[i]=='O' ||Arr[i]=='U')
				{
					break;
				}
			}
		
		if(i==Arr.length)
		{
			return false;
		}
		else
		{
			return true;
		}

		}
}

class Assignment31_4
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter String");
		String str = sobj.nextLine();
		
		StringDemo sdobj = new StringDemo();
		
		boolean iRet = sdobj.ChkVowel(str);
		
		if(iRet == true)
		{
			System.out.println("String Contains Vowel");
		}
		else
		{
			System.out.println("String does not Contains Vowel");
		}
		System.out.println("Difference is :"+iRet);
		
	}
}