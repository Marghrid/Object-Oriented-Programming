public class App {
	public static void main(String[] args) {
		Table t1 = new Table(3);
		Table t2 = new Table(3);
		Table t3 = new Table(9);

		t1.setAll(99);
		t3.setAll(1);
		t2.setAll(2);
		t2.setValue(1, 200);

		System.out.println();
		System.out.println("Comparison by the sum of elements: compareTo");
		System.out.println("t1.compareTo(t2)");
		System.out.println(t1.compareTo(t2));
		System.out.println();
		System.out.println("Comparison by the maximum: MAX_COMPARATOR.compare");
		System.out.println("Table.MAX_COMPARATOR.compare(t1, t2)");
		System.out.println(Table.MAX_COMPARATOR.compare(t1, t2));
		System.out.println();
		System.out.println("Comparison by the length: LENGTH_COMPARATOR.compare");
		System.out.println("Table.LENGTH_COMPARATOR.compare(t1, t3)");
		System.out.println(Table.LENGTH_COMPARATOR.compare(t1, t3));

		t3.setValue(1, 2);
		t3.setValue(2, 3);
		t3.setValue(3, 4);
		t3.setValue(4, 5);
		t3.setValue(5, 6);
		t3.setValue(6, 7);
		t3.setValue(7, 8);
		t3.setValue(8, 9);

		System.out.println();
		System.out.println("Print table using the iterator");

		System.out.println();
		System.out.println(t3.getValue(0));
		
		Iterator it3 = t3.getIterator();
		while (it3.hasNext()) {
			System.out.println(it3.next());
		}

	}
}
