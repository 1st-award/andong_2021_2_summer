import java.util.Scanner;

public class InputPrint {
	public static void main(String[] args) {
		PrintInputInt(InputInt());
	}
	public static int InputInt() {
		Scanner sc = new Scanner(System.in);
		System.out.print("정숫값: ");
		return sc.nextInt();
	}
	public static void PrintInputInt(int _getIntNumber) {
		System.out.println(_getIntNumber + "이라고 입력했습니다.");
	}
}
