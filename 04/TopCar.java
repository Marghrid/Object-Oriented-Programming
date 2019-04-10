public class TopCar extends MediumCar {
	private Xtreme _extraEngine;

	public void addEngine() {
		_extraEngine = new Xtreme();
		System.out.println(_extraEngine + " was added to " + this);
	}

	@Override
	public void go() {
		if(_extraEngine != null)
			_extraEngine.turnOn();
		super.go();
	}
	
	@Override
	public void stop() {
		super.stop();
		if(_extraEngine != null)
			_extraEngine.turnOff();
	}

	@Override
	public String toString() {
		return "Top Car";
	}
}