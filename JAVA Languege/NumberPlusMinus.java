import java.util.Scanner;

public class NumberPlusMinus {
	public static void main(String[] args) {
		int number = InputIntNumber();
		System.out.println("10�� ���� ���� " + TenAddNumber(number) + "�Դϴ�.");
		System.out.println("10�� �� ���� " + TenMinusNumber(number) + "�Դϴ�.");
	}
	public static int InputIntNumber() {
		Scanner sc = new Scanner(System.in);
		System.out.print("������: ");
		return sc.nextInt();
	}
	public static int TenAddNumber(int _getIntNumber) {
		return _getIntNumber + 10;
	}
	public static int TenMinusNumber(int _getIntNumber) {
		return _getIntNumber - 10;
	}
}
