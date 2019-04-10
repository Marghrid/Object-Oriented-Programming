import java.util.Map;
import java.util.HashMap;

public class CatRegistry {
	private Map<String, Cat> _cats = new HashMap<String, Cat>();

	public void put(Cat cat) throws DuplicateCatException {
		if( _cats.containsValue(cat))
			throw new DuplicateCatException(cat.getName() + " is already in Registry");
		_cats.put(cat.getName(), cat);
	}

	public Cat get(String name) throws NoSuchCatException {
		if(!_cats.containsKey(name))
			throw new NoSuchCatException(name + " is not in Registry");

		return _cats.get(name);
	}
}