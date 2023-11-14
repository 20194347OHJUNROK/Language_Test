package package0821;

public class HomeWork {
	public static void main(String[] args) {
		
		// 현재 보유하고 있는 돈이 50000원일 때
		int money=50000;
		// 개당 3000원인 사과를 5개를 사고
		int apple_Price=3000;
		// 개당 12000원인 가방을 1개 샀을 때
		int bag_Price=12000;
		// 사과의 구매 개수
		int apple_count=5;
		// 가방의 구매 개수
		int bag_count=1;
		//총 구매 금액
		int Total_amount=(apple_Price*apple_count)+(bag_Price*bag_count);
		//남은 금액
		int Balance_amount = money-Total_amount;
		// 총 구매 금액과 남은 돈을 구하는 프로그램을 작성
		System.out.printf("총 구매 금액 : %d원\n",Total_amount);
		System.out.printf("남은 금액 : %d원\n",Balance_amount);
	}
}

