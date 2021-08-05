import java.util.Scanner;

public class Double {
	public static void main(String[] args) {
		int num = 0;
		Scanner sc = new Scanner(System.in);
		System.out.println("정수 하나를 입력하세요.");
		num = sc.nextInt();
		System.out.println(num + "의 두배는 " + num*2 + "입니다.");
		sc.close();
	}
}
