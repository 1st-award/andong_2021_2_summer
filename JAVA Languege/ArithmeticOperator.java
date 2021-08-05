import java.util.Scanner;

public class ArithmeticOperator {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("정수를 입력하세요: ");
		int time = sc.nextInt();
		int second = time % 60;
		int minute = (time/60) % 60;
		int hour = (time/60) / 60;
		PrintTime(time, second, minute, hour);
		sc.close();
	}
	public static void PrintTime(int _getTime, int _getSec, int _getMin, int _getHour) {
		System.out.print(_getTime + "초는 ");
		System.out.print(_getHour + "시간 ");
		System.out.print(_getMin + "분 ");
		System.out.println(_getSec + "초 입니다.");
	}
}
