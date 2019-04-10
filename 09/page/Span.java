public class Span extends Element {
	private String _text;

	public Span(String text) { _text = text; }

	public String render() { return "<span>" + _text + "</span>"; }
}