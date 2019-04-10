public class NoSuchCatException extends Exception {
    public NoSuchCatException() { super("Cat not in registry"); }
    public NoSuchCatException(String message) { super(message); }
}