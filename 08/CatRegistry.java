import java.io.Serializable;
import java.util.Map;
import java.util.HashMap;

public class CatRegistry implements Serializable {
	private Map<String, Cat> _cats = new HashMap<String, Cat>();

	public Cat get(String name) {
		return _cats.get(name);
	}

	public void put(Cat cat) {
		_cats.put(cat.getName(), cat);
	}
}