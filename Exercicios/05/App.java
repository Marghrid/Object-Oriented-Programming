public class App {
	public static void main(String[] args) {
		BracketsPrinter p1 = new BracketsPrinter();
		DuplicatePrinter p2 = new DuplicatePrinter();

		Table t = new Table(5);

		t.set(0,1);
		t.set(1,3);
		t.set(2,5);
		t.set(4,9);
		t.set(3,7);

		t.print(p1);

		System.out.println("--------------");

		t.print(p2);
	}
}