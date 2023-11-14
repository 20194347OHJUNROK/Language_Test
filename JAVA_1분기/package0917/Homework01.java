package package0917;

import java.util.Scanner;

public class Homework01 {
 public static void main(String[] args) {
	 
	Scanner input=new Scanner(System.in);
	
	System.out.println("Enter of two intgers and multiple of 3>>>");
	int a=input.nextInt();
	int b=input.nextInt();
	/*(1)
	if(a<b)
	{
		for(int i=a;i<b;i++)
		{
			if(i%3==0)
			{
				System.out.printf("%d ",i);
			}
		}
	}
	
	if(a>b)
	{
		for(int i=a;i>b;i--)
		{
			if(i%3==0)
			{
				System.out.printf("%d ",i);
			}
		}
	}
	*/
	
	// (2)
	int flag = (a<=b)? 1 : -1;
	
	for(int n = a; n!=(b + flag) ;n += flag)
	{
		if(n%3==0)
			System.out.println("n = " +n);
	}
	
	input.close();
}
}
