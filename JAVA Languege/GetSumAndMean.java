import java.util.Scanner;

public class GetSumAndMean {
	public static void main(String[] args) {
		System.out.print("x�� ��: ");
		double numA = GetIntNumber();
		System.out.print("y�� ��: ");
		double numB = GetIntNumber();
		PrintSum(numA, numB);
		PrintMean(numA, numB);
	}
	public static double GetIntNumber() {
		Scanner sc = new Scanner(System.in);
		return sc.nextDouble();
	}
	public static void PrintSum(double _getIntNumA, double _getIntNumB) {
		System.out.println("�հ�� " + (_getIntNumA + _getIntNumB) + "�Դϴ�.");
	}
	public static void PrintMean(double _getIntNumA, double _getIntNumB) {
		System.out.println("����� " + ((_getIntNumA + _getIntNumB)/2.0) + "�Դϴ�.");
	}
}
