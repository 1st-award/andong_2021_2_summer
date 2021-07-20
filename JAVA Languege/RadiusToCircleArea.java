import java.util.Scanner;

public class RadiusToCircleArea {
	static int radius;
	static double circleArea;
	
	public static void main(String[] args) {
		final double PI = 3.14;
		Scanner sc = new Scanner(System.in);
		
		System.out.print("���� ������ �Է�: ");
		radius = sc.nextInt();
		circleArea = calc(PI, radius);
		print();
	}
	// ��� ���
	public static void print() {
		System.out.printf("������ %d�� ���Ǹ����� %.1f�Դϴ�.\n", radius, circleArea);
	}
	// ���� ���
	public static double calc(double _PI, int _radius) {
		return _radius * _radius * _PI;
	}
}
