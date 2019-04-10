import java.util.List;
import java.util.ArrayList;

public abstract class Region implements Taxpayer {
	private List<Taxpayer> _taxpayers = new ArrayList<Taxpayer>();

	public double income() {
		double total = 0;
		for (Taxpayer payer : _taxpayers)
			total +=payer.income();
		return total;
	}

	public void pay(double amount) {
		double each = amount / _taxpayers.size();
		for (Taxpayer payer : _taxpayers) {
			payer.pay(each);
		}
	}

	public void add(Taxpayer taxpayer) {
		if(isValid(taxpayer))
			_taxpayers.add(taxpayer);
	}

	public void remove(Taxpayer taxpayer) {
		_taxpayers.remove(taxpayer);
	}

	public abstract boolean isValid(Taxpayer taxpayer);
}