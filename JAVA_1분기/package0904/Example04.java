package package0904;

import java.util.Scanner;

public class Example04 {
	public static void main(String[] args) {
		
		// Q1.
		// 두 정수 a,b를 입력받고 두 정수 a, b 를 포함한 사이의 정수들을 출력하는 for문을 작성
		Scanner input=new Scanner(System.in);
		
		System.out.println("Enter of between a and b >>>");
		int a=input.nextInt();
		int b=input.nextInt();
		
		int max=a>b?a:b;
		int min=a<b?a:b;
		
		for(int i=min;i<=max;i++) {
			System.out.println(i);
		}
		
		// Q2.
		// 임의의 정수를 입력을 받고 각 자리 정수를 출력하는 반복문을 작성
		// 312545
		// 1's digit : 5
		// 2's digit : 4
		// .....
		// 6's digit : 3
		System.out.println("Enter an integer >>> ");
		int num1=input.nextInt();
		int digit1=0;
		int count1=1;
		
		for(int i=1;i<=num1;i*=10) {
			digit1=num1/i;
			System.out.printf("%d's digit : %d\n",count1,digit1%10);
			count1++;	
		}
		
		input.close();
	}
}
