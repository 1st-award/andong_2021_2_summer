import java.util.Scanner;

public class Numbering {
	public int inputData() {
		Scanner sc = new Scanner(System.in);
		System.out.print("������ : ");
		return sc.nextInt();
	}
	
	public void compare(int a) {
		if(a>0)
			this.printing("���");
		else if(a<0)
			this.printing("����");
		else
			this.printing("0");
	}
	
	public void printing(String str) {
		System.out.println("�� ���� " + str + "�Դϴ�.");
	}
	
	public static void main(String[] args) {
		Numbering nb = new Numbering();
		for(int i=0; i<3; ++i) {
			int a = nb.inputData();
			nb.compare(a);
		}
	}
}
