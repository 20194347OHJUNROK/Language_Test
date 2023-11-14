package package0827;

import java.util.Scanner;

public class Example02_Input {

	public static void main(String[] args) {
		
		// 사용자로부터 이름과 나이를 입력을 받아서
		// 이름과 나이와 5년뒤의 나이를 출력하는 프로그램을 작성
		Scanner input = new Scanner(System.in);
		
		System.out.print("Enter a name >>> ");
		String name = input.nextLine();
		
		System.out.print("Enter a age >>> ");
		int age = input.nextInt();
		

		System.out.println("Name : " + name);
		System.out.println("Age : " + age);
		System.out.println("Age after 5 years : " + (age+5));
		
		input.close();
	}

}
