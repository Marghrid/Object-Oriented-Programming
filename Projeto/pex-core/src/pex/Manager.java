package pex;

import java.util.list;
import java.util.ArrayList;


public class Manager {

	private List<Interpreter> _interpreters = new ArrayList<Interpreter>();

	public Manager() {
		Interpreter baseInterpreter = new Interpreter();
		_interpreters.add(baseInterpreter);
	}

	public createInterpreter() {
		Interpreter newInterpreter = new Interpreter();
	}

	public addInterpreter(Interpreter newInterpreter) {
		_interpreters.add(newInterpreter);
	}
}