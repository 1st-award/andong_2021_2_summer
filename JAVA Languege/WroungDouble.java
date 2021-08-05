import java.util.Scanner;

public class WroungDouble {
	public static void main(String[] args) {
		int n1, n2;
		Scanner sc = new Scanner(System.in);
		System.out.println("정수 하나를 입력하세요.");
		n2 = n1 = sc.nextInt();
		System.out.println(n1 + "의 두배는 " + n1 + n2 + "입니다.");
		sc.close();
	}
}
