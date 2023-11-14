package package0903;

import java.util.Scanner;

public class Example01 {
	public static void main(String[] args) {
		// 사용자로부터 입력받은 값이 짝수인지 홀수인지 출력
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter an positive integer >>>");
		int num=input.nextInt();
		if(num%2==0)
		{
			System.out.println(num + "is even number.");
		}
		else
		{
			System.out.println(num + "is odd number.");
		}
		//============================================================================================================
		
		// 점수 3개를 입력받고 평균이 75점이상이면 "합격입니다"를 출력하고 그렇지않으면 "불합격입니다."를 출력하는 프로그램을 작성
		System.out.println("Enter of three scores >>>");
		int score1=input.nextInt();
		int	score2=input.nextInt();
		int score3=input.nextInt();
		
		double avg= (score1 + score2+ score3)/3.0;
	
		if(avg>=75)
		{
			System.out.println("합격입니다.");
		}
		else
		{
			System.out.println("불합격입니다.");
		}
		
		//============================================================================================================
		input.close();
	}
}
