package pex;

import java.io.Serializable;

public class Interpreter implements Serializable {
	private static final long serialVersionUID = 201611112219L;

	private Map<String, Program> _programs = new TreeMap<String, Program>();
}