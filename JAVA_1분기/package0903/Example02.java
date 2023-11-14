package package0903;

import java.util.Scanner;

public class Example02 {
	public static void main(String[] args) {
		// 사용자로부터 입력받은 정수가 짝수이면 "n is even number"를
		// 홀수이면 "n is odd number" 0이면 "n is zero."를 출력하라
		
		Scanner input =new Scanner(System.in);
		
		System.out.println("Enteran positive integer >>>");
		int n=input.nextInt();
		
		if(n%2==0 && n>0)
		{
			System.out.println(n + " is even number.");
		}
		else if(n%2==1)
		{
			System.out.println(n + " is odd number.");
		}
		else
		{
			System.out.println(n + " is zero.");
		}
		
		input.close();
	}
}
