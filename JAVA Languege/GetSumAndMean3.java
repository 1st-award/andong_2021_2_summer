import java.util.Scanner;

public class GetSumAndMean2 {
	public static void main(String[] args) {
		int sum = GetSum(InputNumber());
		PrintResult(sum, GetMean(sum));
	}
	public static int[] InputNumber() {
		Scanner sc = new Scanner(System.in);
		int []numArr = new int[3];
		char []count = {'첫', '두', '세'};
		for(int i=0; i<3; ++i) {
			System.out.print(count[i] + "번째 정수 입력: ");
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
		System.out.println("세 정수의 합은 " + _getSum + "입니다.");
		System.out.println("세 정수의 평균은 " + _getMean + "입니다.");
	}
}
