import java.io.Serializable;

public class Cat implements Serializable {
	private String _name;
	private int _age;
	private double _weight;

	public Cat(String name, int age, double weight) {
		_name = name;
		_age = age;
		_weight = weight;
	}

	public String getName() {
		return _name;
	}

	public String toString() {
		return _name + ", " + _age + " years old, " + _weight + " kg.";
	}
}