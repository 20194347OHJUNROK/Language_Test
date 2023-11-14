package package0917;

import java.util.Scanner;

public class Example02 {
	public static void main(String[] args) {
		/*
		 Q1. n * n 사이즈의 정사각형을 출력
		 	ex) n = 3
				* * *
				* * *
				* * * 
		 */
		
		Scanner input = new Scanner(System.in);
		System.out.println("Enter an integer >>> ");
		int size=input.nextInt();
		
		for(int i=1;i<=size;i++)
		{
			System.out.print(i + "line : ");
			for(int j=0;j<size;j++)
			{
				System.out.print("* ");
			}
			System.out.println();
		}
		System.out.println("=============================================");
		
		/*
		 Q2. m * n 사이즈의 사각형을 출력하는 반복문을 작성
		 		m : 가로 크기
		 		n : 세로 크기		 
		 */
		
		System.out.println("Enter of with and height >>> ");
		int m = input.nextInt();
		int n = input.nextInt();
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				System.out.print("* ");
			}
			System.out.println();
		}
		System.out.println("=============================================");
		
		
		/*
		 Q3. 높이와 밑변이 동일한 직각 삼각형을 출력
		 	*
		 	* *
		 	* * *
		 	* * * *
		 	* * * * *
		 */
		
		System.out.println("Enter of rows >>> ");
		int rows=input.nextInt();
		
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<=i;j++)
			{
				System.out.print("* ");
			}
			System.out.println();
		}
		System.out.println("=============================================");
		
		/*
		 	Q4. 높이와 밑변이 동일한 직각 삼각형을 출력
		 		  *
		 		* *
		 	  * * *
		    * * * *
		  * * * * *  
		 */
		
		for(int i=0;i<rows;i++)
		{
			for(int count = 0, space = rows-i; count<space; count++)
			{
				System.out.print("  ");
			}
			for(int j=0;j<=i;j++)
			{
				System.out.print("* ");
			}
			System.out.println();
		}
		
		
		input.close();
	}
}
