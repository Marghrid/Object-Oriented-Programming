public class Person extends TaxPayer {

	@Override
	public double accept(FriendlyIRS irs) {
		return irs.visitPerson(this);
	}
}