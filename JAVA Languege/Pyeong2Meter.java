import java.util.Scanner;

public class Pyeong2Meter {

	public static void main(String[] args) {
		final double ja = 30.0 / 99.0;
		final int SIX = 6;
		Scanner scan = new Scanner(System.in);
		System.out.print("������ �Է��ϼ���: ");
		double pyeong = scan.nextDouble();
		double sqMeter = (SIX*ja) * (SIX*ja) * pyeong;
		printResult(pyeong, sqMeter);
	}
	
	static void printResult(double _pyeong, double _sqMeter) {
		System.out.printf("���� %.2f�� %.2f���������Դϴ�.\n", _pyeong, _sqMeter);
	}
}