import java.util.ArrayList;

public class Region extends TaxPayer {
	private ArrayList<Company> _companies = new ArrayList<Company>();

	public Region() {
		int count = (int) (Math.random() * 100);
		for (int i = 0; i < count; i++)
			_companies.add(new Company());
	}
 
	public int size() { return _companies.size(); }

	public Company get(int i) { return _companies.get(i); }

	@Override
	public double accept(FriendlyIRS irs) {
		return irs.visitRegion(this);
	}
}