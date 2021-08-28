import java.util.Scanner;
import java.lang.Math;

public class Abstract {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("정수값 : ");
		int a = sc.nextInt();
		System.out.println("절댓값은 " + Math.abs(a) + "입니다.");
	}
}
