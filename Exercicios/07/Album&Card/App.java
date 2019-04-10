public class App {
	public static void main(String[] args) {
		// All cards have the same image due to very high levels of don't-care-ness.
		Image i = new Image();

		Card c1 = new Card(9, i);
		Card c2 = new Card(8, i);
		Card c3 = new Card(7, i);
		Card c4 = new Card(6, i);
		Card c5 = new Card(5, i);
		Card c6 = new Card(4, i);
		Card c7 = new Card(3, i);
		Card c8 = new Card(2, i);
		Card c9 = new Card(1, i);
		Card c0 = new Card(0, i);

		Album a1 = new Album();
		Album a2 = new Album();

		a1.add(c1);
		a2.add(c2);
		a1.add(c3);
		a2.add(c4);
		a1.add(c5);
		a2.add(c6);
		a1.add(c7);
		a2.add(c8);
		a1.add(c9);
		a2.add(c0);

		System.out.println(a1.getAll());
		System.out.println(a2.getAll());

		System.out.println("a1 equals a2?  " + (a1.equals(a2) ? "Yes." : "No."));
		

	}
}