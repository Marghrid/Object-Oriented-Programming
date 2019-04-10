public class Page extends Composite {
	public String render() {
		String string = "<page>\n";
		for(Element el : _elements)
			string += el.render() + "\n";
		string += "</page>\n";
		return string;
	}
}