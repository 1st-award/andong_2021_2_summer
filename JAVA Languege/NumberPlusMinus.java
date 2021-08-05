import java.util.Scanner;

public class NumberPlusMinus {
	public static void main(String[] args) {
		int number = InputIntNumber();
		System.out.println("10을 더한 값은 " + TenAddNumber(number) + "입니다.");
		System.out.println("10을 뺀 값은 " + TenMinusNumber(number) + "입니다.");
	}
	public static int InputIntNumber() {
		Scanner sc = new Scanner(System.in);
		System.out.print("정수값: ");
		return sc.nextInt();
	}
	public static int TenAddNumber(int _getIntNumber) {
		return _getIntNumber + 10;
	}
	public static int TenMinusNumber(int _getIntNumber) {
		return _getIntNumber - 10;
	}
}
