import java.util.Scanner;

public class ShareAndRest {
	public int input() {
		Scanner sc = new Scanner(System.in);
		System.out.print("정수값 : ");
		int a = sc.nextInt();
		if(a<0) {
			System.out.println("양수가 아닌 값을 입력했습니다.");
			System.exit(0);
		}
		return a;
	}
	public int calc(int a) {
		return a%3;
	}
	public void print(int a) {
		System.out.printf("이 값을 3으로 나눈 나머지는 %d입니다.\n", a);
	}
	public static void main(String[] args) {
		ShareAndRest sar = new ShareAndRest();
		for(int i=0; i<3; ++i) {
			int a = sar.input();
			a = sar.calc(a);
			sar.print(a);
		} 
	}
}
