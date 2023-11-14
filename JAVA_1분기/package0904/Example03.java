package package0904;

import java.util.Scanner;

public class Example03 {
	public static void main(String[] args) {
		// Q1.
		// 사용자가 입력한 양수를 출력하는 프로그램을 작성
		// 음수를 입력받은경우 다시 입력되도록 작성
		Scanner input = new Scanner(System.in);
		int integer;
		do {
			System.out.println("Enter an integer >>>");
			integer=input.nextInt();
		}while(integer<=0);
		
		
		
		// Q2.
		// do ~ while문을 이용하여 구구단중 6단을 출력하는 프로그램을 작성
		int n=1;
		int dan=6;
		do {
			System.out.printf("%d * %d = %d\n",dan,n,dan*n);
			n++;
		}while(n<=9);
		input.close();
	}
}
