package package0918;

import java.util.Scanner;

public class Example02 {
	public static void main(String[] args) {
		
		// 사용자로부터 10개의 점수를 입력받아 배열에 저장한 다음 총합과 평균ㅇ르 출력
		Scanner input = new Scanner(System.in);
		
		int length = 10;
		int[] scores=new int[length];
		
		System.out.println("Enter of score >>>");
		// 사용자 입력
		for(int i=0;i<length;i++)
		{
			scores[i] =input.nextInt();
			
		}
		
		int total = 0;
		double avg = 0.0;
		
		for(int i=0; i<length; i++)
		{
		// 총합
		total += scores[i];
		// 평균
		avg = (double)total / scores.length;
		}
		
		System.out.println("Total : " + total);
		System.out.println("Average : " + avg);
		
		input.close();
	}
}
