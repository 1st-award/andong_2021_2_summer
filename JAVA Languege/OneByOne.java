// �� �ٿ� 1���ھ� �ڽ��� �̸��� ǥ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
import java.util.Scanner;

public class OneByOne {

	public static void main(String[] args) {
		String insertName;
		Scanner sc = new Scanner(System.in);
		insertName = sc.nextLine();
		
		showName(insertName);
	}
	public static void showName(String _userName) {
		for(int i=0; i<_userName.length(); ++i) {
			System.out.println(_userName.charAt(i));
		}
	}
}
