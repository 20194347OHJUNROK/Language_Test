package package0828;

import java.util.Scanner;

public class Example01_Operator {
	public static void main(String[] args) {
		
		// 사용자로부터 입력받은 정수 값이
		// 0이상의 정수이면 true를 그렇지않으면 false를 출력하는 프로그램을 작성
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter a positive integer : ");
		int num=input.nextInt();
		
		System.out.println(num + " >= 0 : " + (num>= 0));
		
		
		input.close();
		}
}
