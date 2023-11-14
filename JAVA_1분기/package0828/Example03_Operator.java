package package0828;

import java.util.Scanner;

public class Example03_Operator {
	public static void main(String[] args) {
		
		// 사용자로부터 두 개의 정수를 입력 받고
		// 두 정수가 각각 70보다 크면 true를 그렇지않으면 false를 출력하는 프로그램을 작성
		System.out.println("Enter a positive integer : ");
		Scanner input = new Scanner(System.in);
		int n1 = input.nextInt();
		int n2 = input.nextInt();
		
		boolean result = (n1>70) && (n2>70);
		System.out.println("n1 > 70 && n2 > 70 : " + result);
		
		input.close();
	}
}
