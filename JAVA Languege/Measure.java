import java.util.Scanner;

public class Measure {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("정수 A : ");
		int a = sc.nextInt();
		System.out.print("정수 B : ");
		int b = sc.nextInt();
		if(a%b == 0)
			System.out.printf("%d는 %d의 약수입니다.\n", b, a);
		else
			System.out.printf("%d는 %d의 약수가 아닙니다.\n", b, a);
	}
}
