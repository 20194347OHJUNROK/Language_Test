package package0904;

import java.util.Scanner;

public class Homework01 {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter of hours and minutes : >>>");
		int hours = input.nextInt();
		int minutes = input.nextInt();
		
		int timer = 45;
		minutes-=timer;
		
		if(hours<=0)
		{
			hours+=24;
		}
		if(minutes<=0)
		{
			minutes+=60;
			hours--;
		}
		System.out.printf("%02d : %02d",hours,minutes);
						
		input.close();	
	}
}
