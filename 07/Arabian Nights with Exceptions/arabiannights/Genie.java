package arabiannights;

public class Genie {
	private int _totalWishes;
	private int _grantedWishes = 0;

	protected Genie(int wishes) {
		_totalWishes = wishes;
	}

	public int getTotalWishes() { return _totalWishes; }
	public int getGrantedWishes() { return _grantedWishes; }
	public void incrGrantedWishes() { _grantedWishes++; }

	public void grantWish() throws SomethingWrongWithGenieException {
		if (_grantedWishes < _totalWishes) {
			incrGrantedWishes();
			System.out.println("Wish was granted!");
		}
		else if(this instanceof GrumpyGenie)
			throw new BadMoodException("This is a GRUMPY genie. I don't know what you expected");
		else if(this instanceof FriendlyGenie)
			throw new NoMoreWishesException("Don't you think you've had enough?");
	}
}