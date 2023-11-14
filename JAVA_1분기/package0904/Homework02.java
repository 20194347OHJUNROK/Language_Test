package package0904;

import java.util.Scanner;

public class Homework02 {
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter an integer between 1 and 12 >>>");
		int num = input.nextInt();
		String season=" ";
		
		switch(num) {
		case 1:
		case 2:
		case 12:
			season="겨율";
			break;
		case 3:
		case 4:
		case 5:
			season = "봄";
			break;
		case 6:
		case 7:
		case 8:
			season = "여름";
			break;
		case 9:
		case 10:
		case 11:
			season = "가을";
			break;
		default:
			season = "잘못 입력";
		}
		System.out.println(season);
		
		input.close();
	}
}
