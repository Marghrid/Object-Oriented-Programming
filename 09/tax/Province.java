public class Province extends Region {
	@Override
	public boolean isValid(Taxpayer taxpayer) {
		return taxpayer instanceof SingleTaxpayer;
	}
}