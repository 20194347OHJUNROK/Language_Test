package package0903;

import java.util.Scanner;

public class Example05 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter first position >>> ");
		int x1=input.nextInt();
		int y1=input.nextInt();
		
		System.out.println("Enter second position >>> ");
		int x2=input.nextInt();
		int y2=input.nextInt();
		
		if(x1!=x2)
		{
			System.out.println(x1-x2);
		}
		else
		{
			System.out.println(y1-y2);
		}
		input.close();
	}
}
