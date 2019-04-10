public class Card implements Comparable<Card> {
	private int _id;
	private Image _image;

	public Card(int id, Image image) {
		_id = id;
		_image = image;
	}

	public int getId() { return _id; }
	public Image getImage() { return _image; }

	@Override
	public int compareTo(Card other) {
		return _id - other.getId();
	}

	@Override
	public String toString() { return "#" + _id; }
}