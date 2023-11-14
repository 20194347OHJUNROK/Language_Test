package package0827;

import java.util.Scanner;

public class Example03_Operator {

	public static void main(String[] args) {
		// 세 자리 정수 (100 ~ 999)까지의 정수를 입력받아 일의 자리, 십의 자리, 백의 자리를 출력하는 프로그램을 작성
		
		Scanner input=new Scanner(System.in);
		
		System.out.print("Enter an integer : ");
		int num=input.nextInt();
		
		System.out.println(num + "의 백의 자리 : " + num/100);
		System.out.println(num + "의 십의 자리 : " + (num/10)%10);
		System.out.println(num + "의 일의 자리 : " + num%10);
		
		input.close();
	}

}
