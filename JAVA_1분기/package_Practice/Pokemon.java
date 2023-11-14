package package_Practice;

import java.util.Random;

public class Pokemon {
	public static void main(String[] args) {
		Random random = new Random();
		
		String menu = "☆★☆★ Random Choosing a Pokemon☆★☆★\n"
						+ "1. 피카츄\n"
						+ "2. 꼬부기\n"
						+ "3. 이상해씨\n"
						+"☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★";
		
		System.out.println(menu);
		
		int mypokemon = random.nextInt(3)+1;	// 0~2 → 1~3
		System.out.println("선택된 번호 : "+ mypokemon);
		
		// ctrl + alt : 복사후 붙여옮기기
		switch(mypokemon)
		{
		case 1:
			System.out.println("피카츄 선택! 백만볼트");
			break;
		case 2:
			System.out.println("꼬부기 선택! 물대포");
			break;
		case 3:
			System.out.println("이상해씨 선택! 덩굴채찍");
			break;
		
		}
	}
}
