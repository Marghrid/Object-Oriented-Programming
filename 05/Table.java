public class Table {
	private int _numbers[];

	public Table(int size) {
		_numbers = new int[size];
	}

	public void set(int position, int value) { _numbers[position] = value; }

	public void print(Printer printer) {
		for (int number: _numbers)
			System.out.println( printer.format(number) );
	}
}