package package0918;

import java.util.Scanner;

public class Example01 {
	public static void main(String[] args) {
		
		// 사용자로부터 자연수 N을 입력받아 정수형 N개를 저장할
		// 배열을 생성한다음 10 부터 10씩 증가하는 값들을 저장한 뒤 출력
		
		Scanner input = new Scanner(System.in);
		System.out.println("Enter array's size >>>");
		int N=input.nextInt();
		
		// 배열 생성
		int[]array=new int[N];
		
		

		for(int i=0;i<N;i++)
		{
			array[i] = (i+1)*10;
			System.out.println("arr[" + i + "] = " + array[i]);
		}
		System.out.println();
		
		for(int i=0, n=10; i<N; i++, n+=10)
		{
			array[i]=n;
			System.out.println("arr[" + i + "] = " + array[i]);
		}
		
		input.close();
		
		
	}
}
