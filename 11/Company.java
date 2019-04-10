import java.util.ArrayList;

public class Company extends TaxPayer {
	private ArrayList<Person> _people = new ArrayList<Person>();

	public Company() {
		int count = (int) (Math.random() * 100);
		for (int i = 0; i < count; i++)
			_people.add(new Person());
	}

	public int size() { return _people.size(); }

	public Person get(int i) { return _people.get(i); }

	@Override
	public double accept(FriendlyIRS irs) {
		return irs.visitCompany(this);
	}
}