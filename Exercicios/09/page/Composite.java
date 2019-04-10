import java.util.List;
import java.util.ArrayList;

public abstract class Composite extends Element {
	protected List<Element> _elements = new ArrayList<Element>();

	public void add(Element element) { _elements.add(element); }
}