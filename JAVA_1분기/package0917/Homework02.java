package package0917;

import java.util.Scanner;

public class Homework02 {
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		
		System.out.println("Enter of three integers(100~999) >>> ");
		int a=input.nextInt();
		int b=input.nextInt();
		int c=input.nextInt();
				
		int square=a*b*c;
		System.out.println(square);
		
		// 2의 개수를 저장할 카운트 변수
		int count = 0;
		
		for(int i=1; i<=square; i*=10)
		{
			int mod = (square/i)%10;
			if(mod == 2)count++;
		}
		
		System.out.println("2's count : " + count);
		
		
		input.close();
	}
}
