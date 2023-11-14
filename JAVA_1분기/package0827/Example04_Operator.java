package package0827;

import java.util.Scanner;

public class Example04_Operator {

	public static void main(String[] args) {
		// 사용자로부터 초 단위의 시간을 입력 받고
		// 해당시간이 몇시간 몇분 몇초인지 출력
		// Input : 7315
		// Output : 2시간 1분 55초
		
		Scanner input = new Scanner(System.in);
		
		System.out.print("Enter a positive integer : ");
		int time = input.nextInt();
		
		// 1시간 = 60분 = 3600초
		int hours = time / 3600;
		int minutes = (time % 3600)/60;
		int seconds = time % 60;
		
		System.out.println(hours + "시간" + minutes + "분" + seconds + "초");
		
		input.close();
	}

}
