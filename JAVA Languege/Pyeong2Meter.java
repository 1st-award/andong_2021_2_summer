import java.util.Scanner;

public class Pyeong2Meter {

	public static void main(String[] args) {
		final double ja = 30.0 / 99.0;
		final int SIX = 6;
		Scanner scan = new Scanner(System.in);
		System.out.print("평형을 입력하세요: ");
		double pyeong = scan.nextDouble();
		double sqMeter = (SIX*ja) * (SIX*ja) * pyeong;
		printResult(pyeong, sqMeter);
	}
	
	static void printResult(double _pyeong, double _sqMeter) {
		System.out.printf("평형 %.2f는 %.2f제곱미터입니다.\n", _pyeong, _sqMeter);
	}
}