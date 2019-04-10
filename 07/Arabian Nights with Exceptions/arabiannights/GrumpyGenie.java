package arabiannights;

public class GrumpyGenie extends Genie {
	public GrumpyGenie() { super(1); }

	/*@Override
	public void grantWish() throws BadMoodException {
		try {
			System.out.println("This is a Grumpy Genie");
			super.grantWish();
		} catch (SomethingWrongWithGenieException e) {
			System.out.println("Stops here!");
			throw new BadMoodException("This is a GRUMPY genie. I don't know what you expected");
		}
	}*/

	@Override
	public String toString() {
		if (getGrantedWishes() == 0)
			return "Grumpy genie has a wish to grant.";
		return "Grumpy genie granted a wish.";
	}
}