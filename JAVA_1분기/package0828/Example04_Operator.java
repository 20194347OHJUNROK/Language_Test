package package0828;

import java.util.Scanner;

public class Example04_Operator {
	public static void main(String[] args) {
		
		// 사용자로부터 정수 하나를 입력받아 입력받은 정수가
		// 3의배수 이거나 7의 배수이면 true 를 그렇지않으면 false를 출력
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter a positive integer : ");
		int num =input.nextInt();
		
		boolean result = (num % 3==0) || (num % 7 ==0);
		
		System.out.println(num + " is " + result );
		
		input.close();
	}
}
