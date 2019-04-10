public class VanillaTaxes implements FriendlyIRS {
	public double visitPerson(Person person) {
		return 1;
	}

	public double visitCompany(Company company) {
		return company.size();
	}

	public double visitRegion(Region region) {
		int tax = 0;
		for (int i = 0; i < region.size(); i++)
			tax += region.get(i).accept(this);
		return tax;
	}
}