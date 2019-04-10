import java.util.TreeMap;
import java.util.Collection;

public class Album {
	private TreeMap<Integer, Card> _cards= new TreeMap<Integer, Card>();

	public void add(Card card) {
		_cards.put(card.getId(), card);
		System.out.println(card + " was added to " + this);
	}

	public void remove(int id) {
		_cards.remove(id);
		System.out.println(_cards.get(id) + " was removed from " + this);
	}

	public Collection<Card> getAll() {
		return _cards.values();
	}

	public int size() { return _cards.size(); }

	@Override
	public boolean equals(Object o) {
		if(o instanceof Album) {
			Album a = (Album) o;
			return a.size() == size();
		}
		return false;
	}

	@Override
	public String toString() { return "Album: " + getAll(); }
}