import java.util.Scanner;

public class GetTriangleArea {
	public static void main(String[] args) {
		System.out.println("�ﰢ���� ������ ���մϴ�.");
		System.out.print("�غ�: ");
		double base = GetNumber();
		System.out.print("����: ");
		double height = GetNumber();
		PrintTriangleArea(base, height);
	}
	public static double GetNumber() {
		Scanner sc = new Scanner(System.in);
		return sc.nextDouble();
	}
	public static void PrintTriangleArea(double _getBase, double _getHeight) {
		System.out.println("������ " + ((_getHeight * _getBase)/2) + "�Դϴ�.");
	}
}
