import java.util.Scanner;

public class PyeongToJegopMeter {
	static double pyeong;
	static double jegop;
	
	public static void main(String[] args) {
		final double JA = 30.0 / 99.0;
		final int SIX = 6;
		System.out.print("������ �Է��ϼ��� : ");
		pyeong = input();
		jegop  = calc(pyeong, SIX, JA);
		print();
	}
	// ��� �Է�
	public static double input() {
		Scanner sc = new Scanner(System.in);
		double pyeong = sc.nextDouble();
		return pyeong;
	}
	// ��� ���
	public static void print() {
		System.out.printf("���� %f�� %.2f �������� �Դϴ�.\n", pyeong, jegop);
	}
	// ���->���� ȯ��
	public static double calc(double _pyeongParm, int _sixParm, double _jaParm) {
		return (_sixParm*_jaParm) * (_sixParm*_jaParm) * _pyeongParm;
	}
}
