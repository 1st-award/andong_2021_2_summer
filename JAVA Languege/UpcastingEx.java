public class UpcastingEx {
	public static void main(String[] args) {
		Person p = new Student("���繮");
		Student s;
		s = (Student)p;
		System.out.println(s.name);
		s.grade = "A";
	}
}
