package package0828;

import java.util.Scanner;

public class Example06_Operator {
	public static void main(String[] args) {
		// 사용자로부터 두 개의 정수를 입력받고
		// 두 정수 중 큰 값 과 두 정수의 차이를 절대값으로 출력하는 프로그램을 작성하라.
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter two positives integers >>> ");
		int n1=input.nextInt();
		int n2=input.nextInt();
		
		int max = n1>n2? n1: n2;
		int distance = n1>n2? n1-n2 : n2-n1;
		
		System.out.printf("max : %d\n|n1 - n2| : %d\n", max, distance);
		
		input.close();
	}
}
