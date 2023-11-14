package package0828;

import java.util.Scanner;

public class Example02_Operator {
 public static void main(String[] args) {
	 
	  // 사용자가 입력한 정수값이 짝수이면 true, 홀수이면 false를 출력하는 프로그램을 작성
	 	Scanner input = new Scanner(System.in);
		
		System.out.println("Enter a positive integer : ");
		int n =input.nextInt();
		
		System.out.println(n % 2==0);
		
		input.close();
 }
}
