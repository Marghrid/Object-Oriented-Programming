public class DuplicatePrinter implements Printer {
	@Override
	public String format(int number) {
		return number + " " + number;
	}
}