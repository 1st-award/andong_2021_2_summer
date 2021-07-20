// 다섯개의 int형 변수에 값을 대입해서 합계와 평균을 구하는 프로그램을 작성하시오. 함수는 본인 판단하여 나눠서 작성해볼 것.
import java.util.Scanner;

public class SumAndAvg {
	public static void main(String[] args) {
		int []score = new int[5];
		int sum = 0;
		double avg = 0.0;
		Scanner sc = new Scanner(System.in);
		for(int i=0; i<score.length; ++i) {
			score[i] = sc.nextInt();
		}
		sum = CalcSum(score);
		avg = CalcAvg(sum, score.length);
		for(int i=0; i<score.length; ++i) {
			System.out.print(score[i] + " ");
		}
		System.out.println("의 합계는 " + sum + "이고 평균은 " + avg + "입니다.");
		
	}
	// 합계 계산
	public static int CalcSum(int []_score) {
		int sum =0;
		for(int i=0; i<_score.length; ++i) {
			sum += _score[i];
		}
		return sum;
	}
	// 평균 계산
	public static double CalcAvg(int _scoreSum, int scoreCount) {
		return _scoreSum/(double)scoreCount;
	}
}
