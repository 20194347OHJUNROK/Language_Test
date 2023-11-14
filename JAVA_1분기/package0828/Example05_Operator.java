package package0828;

import java.util.Scanner;

public class Example05_Operator {
	public static void main(String[] args) {
		
		// 사용자로부터 두개의 점수를 입력받고 평균을 구한뒤
		// 두 점수가 40점 이상이거나 두 점수의 평균이 50점 초과인지 출력하는 프로그램을 작성
		System.out.println("Enter two scores >>> ");
		Scanner input = new Scanner(System.in);
		int n1 = input.nextInt();
		int n2 = input.nextInt();
	
		double average = (n1+n2)/2.0;
		boolean isPass = (n1>=40 && n2>=40) || (average > 50);
		
		System.out.println("IS " + average + " Pass ? " + isPass );
		
		input.close();
	}
}
