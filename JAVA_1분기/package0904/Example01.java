package package0904;

import java.util.Scanner;

public class Example01 {
	public static void main(String[] args) {
		Scanner input=new Scanner(System.in);
		
		
		System.out.println("Enter a time >>>");
		int time=input.nextInt();
		
		int timer=45;
		int hours=time/60;
		int minutes=time%60;
		
		minutes+=timer;
		hours%=24;
		if(minutes>=60)
		{
			minutes%=60;
			hours++;
		}
		
	
		System.out.printf("%02d : %02d",hours,minutes);
		
		input.close();
		
	}
}
