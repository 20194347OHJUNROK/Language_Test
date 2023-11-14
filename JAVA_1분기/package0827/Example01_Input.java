package package0827;

import java.util.Scanner;

public class Example01_Input {

	public static void main(String[] args) {
		// 사용자로부터 사각형의 너비와 높이를 입력을 받아서
		// 사각형의 너비, 높이, 넓이를 출력하는 프로그램을 작성
		Scanner input= new Scanner(System.in);
		
		System.out.print("Enter width of rectangle : ");
		int width = input.nextInt();
		
		System.out.print("Enter height of rectangle : ");
		int height = input.nextInt();
		
		int area = width*height;
		
		System.out.println("width : " + width);
		System.out.println("height : " + height);
		System.out.println("area : " + area);
		
		input.close();
		
	}

}
