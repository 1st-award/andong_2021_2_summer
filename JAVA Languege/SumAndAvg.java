// �ټ����� int�� ������ ���� �����ؼ� �հ�� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. �Լ��� ���� �Ǵ��Ͽ� ������ �ۼ��غ� ��.
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
		System.out.println("�� �հ�� " + sum + "�̰� ����� " + avg + "�Դϴ�.");
		
	}
	// �հ� ���
	public static int CalcSum(int []_score) {
		int sum =0;
		for(int i=0; i<_score.length; ++i) {
			sum += _score[i];
		}
		return sum;
	}
	// ��� ���
	public static double CalcAvg(int _scoreSum, int scoreCount) {
		return _scoreSum/(double)scoreCount;
	}
}
