package package0903;

import java.util.Scanner;

public class Example04 {
	public static void main(String[] args) {
		// 1~99 사이의 정수를 입력을 받고
		// 정수값 중에 3, 6, 9 숫자가 하나 있으면 "박수 짝!"을 출력하고
		// 둘이 있으면 "박수짝!짝!"을 출력하는 프로그램을 작성
		
		Scanner input=new Scanner(System.in);
		
		System.out.println("Enter an integer between 1 and 99 >>>");
		int n=input.nextInt();
		
		// 일의 자리
		int firstDigit = n%10;
		// 십의 자리
		int secondDigit = n/10;
		
		boolean first_Multiple = (firstDigit>0 && firstDigit%3==0);
		boolean second_Multiple = (secondDigit>0 && secondDigit%3==0);
		
		if(first_Multiple&&second_Multiple)
		{
			System.out.println("박수 짝! 짝!");
		}
		else if(first_Multiple||second_Multiple)
		{
			System.out.println("박수 짝!");
		}
		
		
		input.close();
	}
}
