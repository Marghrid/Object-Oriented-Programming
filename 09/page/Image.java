public class Image extends Element {

	private String _src = "IMG";

	public Image() {}

	public Image(String src) { _src = src; }

	public String render() { return "<img src=\"" + _src + "\"/>"; }
}