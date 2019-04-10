public class App {
	public static void main(String[] args) {
		BasicCar b = new BasicCar();
		MediumCar m = new MediumCar();
		TopCar t = new TopCar();

		b.go();
		b.stop();
		m.swapEngine();
		t.swapEngine();
		

		System.out.println("=======");
		t.go();
		t.addEngine();
		t.go();


	}
}