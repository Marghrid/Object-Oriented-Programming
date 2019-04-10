public class BasicCar {
	private Economy _engine = new Economy();

	public void go() {
		_engine.turnOn();
		System.out.println(this + " is moving.");
	};

	public void stop() {
		System.out.println(this + " has stopped.");
		_engine.turnOff();
	}

	@Override
	public String toString() {
		return "Basic Car";
	}
}