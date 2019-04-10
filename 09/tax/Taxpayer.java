public interface Taxpayer {
	public void add(Taxpayer taxpayer);

	public void remove(Taxpayer taxpayer);

	public double income();

	public void pay(double amount);
}