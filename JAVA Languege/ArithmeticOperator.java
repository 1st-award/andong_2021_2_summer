import java.util.Scanner;

public class ArithmeticOperator {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("������ �Է��ϼ���: ");
		int time = sc.nextInt();
		int second = time % 60;
		int minute = (time/60) % 60;
		int hour = (time/60) / 60;
		PrintTime(time, second, minute, hour);
		sc.close();
	}
	public static void PrintTime(int _getTime, int _getSec, int _getMin, int _getHour) {
		System.out.print(_getTime + "�ʴ� ");
		System.out.print(_getHour + "�ð� ");
		System.out.print(_getMin + "�� ");
		System.out.println(_getSec + "�� �Դϴ�.");
	}
}
