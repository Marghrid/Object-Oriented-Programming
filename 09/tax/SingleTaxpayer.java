public abstract class SingleTaxpayer implements Taxpayer {
	private double _income;

	public SingleTaxpayer(double income) { _income = income; }

	public double income() { return _income; }
	
	public void pay(double amount) { _income -=amount; }

	public void add(Taxpayer t) {}

	public void remove(Taxpayer t) {}
}