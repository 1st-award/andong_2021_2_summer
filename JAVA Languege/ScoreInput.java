import java.util.Scanner;

public class ScoreInput {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("점수를 입력하세요: ");
		int score = sc.nextInt();
		System.out.println(score + "은(는) 범위 "+ ((score>=0 && score<=100) ? '내' : '밖') + "의 점수 입니다.");
	}
}
