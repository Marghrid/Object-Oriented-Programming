public class Stringer implements OperatorVisitor {
	private String s = "";

	public String toString() { return s; }

	void visitAdd(Add a) {
		s = "(add " + visit
	}
}