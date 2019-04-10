import java.util.Iterator;
import java.util.ArrayList;

public abstract class Beneficiary implements Iterable {

	private int _receivedHelp = 0;
	private ArrayList<Beneficiary> _parts = new ArrayList<Beneficiary>();

	public Iterator<Beneficiary> iterator() {
		return new Iterator<Beneficiary>() {
			int _index = 0;
			public boolean hasNext() { return _index < size()-1;}
			public Beneficiary next() { return _parts.get(_index++); }
			public void remove() { throw new UnsupportedOperationException(); }
		};
	}

	public void receiveHelp(int help) {
		System.out.println(this + " received " + help + " of help.");
		_receivedHelp += help;
		destributeHelp(help);
	}

	public void destributeHelp(int help) {
		if (size() > 1)
			for (int i = 0; i < size(); ++i) //Beneficiary ben : (Beneficiary)this)
				_parts.get(i).receiveHelp(help/size());
	}

	public int size() { return _parts.size(); }

	public int receivedHelp() { return _receivedHelp; }

	public void addIndividual(Individual ind) {
		_parts.add(ind);
	}

	public void addVillage(Village vil) {
		_parts.add(vil);
	}
}