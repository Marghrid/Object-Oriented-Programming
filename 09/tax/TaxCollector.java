public class TaxCollector {
	public double calculateTax(double income) {
		return income * 0.2;
	}

	public void collect(Taxpayer taxpayer) {
		taxpayer.pay(calculateTax(taxpayer.income()));
	}
}