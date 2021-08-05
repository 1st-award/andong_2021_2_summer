import java.util.Scanner;

public class GetSumAndMean2 {
	public static void main(String[] args) {
		int sum = GetSum(InputNumber());
		PrintResult(sum, GetMean(sum));
	}
	public static int[] InputNumber() {
		Scanner sc = new Scanner(System.in);
		int []numArr = new int[3];
		char []count = {'ù', '��', '��'};
		for(int i=0; i<3; ++i) {
			System.out.print(count[i] + "��° ���� �Է�: ");
			numArr[i] = sc.nextInt();
		}
		sc.close();
		return numArr;
	}
	public static int GetSum(int []_getArr) {
		int sum= 0;
		for(int i : _getArr)
			sum +=i;
		return sum;
	}
	public static double GetMean(int _getSum) {
		return (double)_getSum/3;
	}
	public static void PrintResult(int _getSum, double _getMean) {
		System.out.println("�� ������ ���� " + _getSum + "�Դϴ�.");
		System.out.println("�� ������ ����� " + _getMean + "�Դϴ�.");
	}
}
