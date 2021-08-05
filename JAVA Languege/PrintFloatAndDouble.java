import java.util.Scanner;

public class PrintFloatAndDouble {
	public static void main(String[] args) {
		System.out.print("X: ");
		float numF = InputFloat();
		System.out.print("Y: ");
		double numD = InputDouble();
		PrintResult(numF, numD);
	}
	public static float InputFloat() {
		Scanner sc = new Scanner(System.in);
		return sc.nextFloat();
	}
	public static double InputDouble() {
		Scanner sc = new Scanner(System.in);
		return sc.nextDouble();
	}
	public static void PrintResult(float _getFloat, double _getDouble) {
		System.out.println("X= " + _getFloat + "\nY= " + _getDouble);
	}
}
