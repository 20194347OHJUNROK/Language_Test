package package0917;

import java.util.Scanner;

public class File01_Loop {
	public static void main(String[] args) {
		// 반복문을 제어하기 위한 제어문
		// - 반복문의 흐름이 보통 선 검사후 실행으로 되어져있어서
		//	 원하는 부분에서 검사하여 종료하기가 힘들다.
		// - 반복문의 흐름을 보다 원활하게 하기위한 제어문
		
		// - 종류
		// break : 반복문을 종료하기 위한 제어문 만나는 즉시 탈출!
		// continue : 수행 중인 반복을 종료하고 다음 반복으로 넘어가기위한 제어문(SKIP)
		//		for문 	→ 반복 후 작업으로 이동
		//		while문 	→ 조건식
		for(int i=0; i<100; i++)
		{
			if(i==30)break;
			if(i%3 ==0)continue;
			
			System.out.println("i = "+i);
		}
	//------------------------------------------------------------------------------------------
		Scanner input=new Scanner(System.in);
		// 실행 검사 실행
		
		// 사용자가 0을 입력할때 까지 정수를 입력받도록 작성
		// 음수인 경우 다시 입력을 받도록 작성
		while(true)
		{
			System.out.println("Enter an integer >>> ");
			int n= input.nextInt();
			
			// 검사
			if(n==0)break;
			if(n<0)continue;
			
			// 출력
			System.out.println("n = " +n);
		}
		
		input.close();
	}
}

