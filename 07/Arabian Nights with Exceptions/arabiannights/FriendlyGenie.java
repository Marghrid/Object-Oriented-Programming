package arabiannights;

public class FriendlyGenie extends Genie {
	public FriendlyGenie(int wishes) { super(wishes); }

	public int getRemainingWishes() {
		return getTotalWishes() - getGrantedWishes();
	}

	/*@Override
	public void grantWish() throws NoMoreWishesException {
		try {
			super.grantWish();
		} catch (SomethingWrongWithGenieException e) {
			System.out.println("Stops here!");
			throw new NoMoreWishesException("Don't you think you've had enough?");
		}
	}*/

	@Override
	public String toString() {
		return "Friendly genie has granted " + getGrantedWishes() +
			(getGrantedWishes() == 1 ? " wish" : " wishes") +
			" and still has " + getRemainingWishes() + " to grant.";
	}
}