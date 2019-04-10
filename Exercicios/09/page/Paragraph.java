public class Paragraph extends Composite {
	public String render() {
		String string = "<p>\n";
		for(Element el : _elements)
			string += el.render() + "\n";
		string += "</p>\n";
		return string;
	}
}