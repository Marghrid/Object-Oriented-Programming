public class BecauseWeCare implements FriendlyIRS {

	public final int LOW = 1;
	public final int POP = 50;

	public double visitPerson(Person person) {
		return 1;
	}

	public double visitCompany(Company company) {
		int tax = company.size();
		if(tax < LOW)
			tax *= 0.9;
		return tax;
	}

	public double visitRegion(Region region) {
		int tax = 0;
		for (int i = 0; i < region.size(); i++)
			tax += region.get(i).accept(this);
		if (region.size() < POP)
			tax *= 0.9;
		return tax;
	}
}