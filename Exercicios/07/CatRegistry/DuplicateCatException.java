public class DuplicateCatException extends Exception {
	public DuplicateCatException() { super("Cat name already exists in registry"); }
    public DuplicateCatException(String message) { super(message); }
}