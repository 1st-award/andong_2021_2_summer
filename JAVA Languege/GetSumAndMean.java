import java.util.Scanner;

public class GetSumAndMean {
	public static void main(String[] args) {
		System.out.print("x의 값: ");
		double numA = GetIntNumber();
		System.out.print("y의 값: ");
		double numB = GetIntNumber();
		PrintSum(numA, numB);
		PrintMean(numA, numB);
	}
	public static double GetIntNumber() {
		Scanner sc = new Scanner(System.in);
		return sc.nextDouble();
	}
	public static void PrintSum(double _getIntNumA, double _getIntNumB) {
		System.out.println("합계는 " + (_getIntNumA + _getIntNumB) + "입니다.");
	}
	public static void PrintMean(double _getIntNumA, double _getIntNumB) {
		System.out.println("평균은 " + ((_getIntNumA + _getIntNumB)/2.0) + "입니다.");
	}
}
