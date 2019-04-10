public class BracketsPrinter implements Printer {
	@Override
	public String format(int number) {
		return "[" + number + "]";
	}
}