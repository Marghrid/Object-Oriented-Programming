public abstract class Engine{
	public void turnOn() {
		System.out.println(this + " was turned on.");
	}
	public void turnOff() {
		System.out.println(this + " was turned off.");
	}

	public String toString() {
		return "Engine";
	}
}