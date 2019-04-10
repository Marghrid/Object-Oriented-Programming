package arabiannights;

public class Demon extends Genie {

	private boolean _recycled = false;

	public Demon() { super(1); }

	public boolean isRecycled() { return _recycled; }

	public void recycle() { _recycled = true; }

	@Override
	public void grantWish() throws SomethingWrongWithGenieException {
		if (isRecycled())
			throw new TiredOhSoTiredException("This demon has already been recycled!");
		else {
			incrGrantedWishes();
			throw new OopsException("This demon granted a wish... Or has he??");
		}
	}

	@Override
	public String toString() {
		if (isRecycled())
			return "Demon has been recycled.";
		return "Recyclable demon has granted " + getGrantedWishes() +
			(getGrantedWishes() == 1 ? " wish." : " wishes.");
	}
}