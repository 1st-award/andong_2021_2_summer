import java.util.Scanner;

public class ScannerEX_Project {
	Scanner sc = new Scanner(System.in);
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		ScannerEX_Project a = new ScannerEX_Project();
		System.out.println("�̸�, ����, ����, ü��, ���� ���θ� ��ĭ���� �и��Ͽ� �Է��ϼ���.");
		
		String name = sc.next();
		System.out.print("�̸��� " + name + ", ");
		
		String city = sc.next();
		System.out.print("���ô� " + city + ", ");
		
		int age = sc.nextInt();
		System.out.print("���̴� " + age + ", ");
		
		double weight = sc.nextDouble();
		System.out.print("ü���� " + weight + ", ");
		
		boolean single = sc.nextBoolean();
		System.out.println("���� ���δ� " + single + "�Դϴ�.");
		a.input();
		sc.close();
	}
	public void input() {
		
		sc.nextLine();
	}
}
