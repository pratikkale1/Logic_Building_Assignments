
import java.lang.*;
import java.util.*;

class StringDemo
{
		public String Reverse(String str)
		{
			StringBuilder sobj = new StringBuilder(str);
			
			sobj.reverse();
			
			String str1 = sobj.toString();
			
			return str1;
			
		}
}		

class Assignment31_5
{
	public static void main(String arg[])
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter String");
		String str = sobj.nextLine();
		
		StringDemo sdobj = new StringDemo();
		
		String Ret = sdobj.Reverse(str);
		
		System.out.println(Ret);
		
	}
}