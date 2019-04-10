package arabiannights;

public class MagicLamp {
	private int _capacity;
	private int _genies;
	private int _demons = 0;

	public MagicLamp(int capacity) {
		_capacity = _genies = capacity;
	}

	public int getCapacity() { return _capacity; }

	public int getGenies() { return _genies; }
	public void setGenies(int genies) { _genies = genies; }
	
	public int getDemons() { return _demons; }
	public void addDemon() { _demons++; }
	
	public void feedDemon(Demon demon) {
		setGenies(getCapacity());
		addDemon();
		demon.recycle();
	}

	public Genie rub(int wishes) {
		if (getGenies() > 0) {
			setGenies(getGenies() - 1);

			if( ( (getCapacity() - getGenies()) % 2) == 0 )
				return new FriendlyGenie(wishes);
			else
				return new GrumpyGenie();
		}
		return new Demon();
	}

	@Override
	public boolean equals(Object o) {
		if(o instanceof MagicLamp) {
			MagicLamp ml = (MagicLamp)o;
			return getCapacity() == ml.getCapacity()
				&& getGenies() == ml.getGenies()
				&& getDemons() == ml.getDemons();
		}
		return false
;	}
}