public class App {
	public static void main(String[] args) {
		CatRegistry cr = new CatRegistry();

		Cat c1 = new Cat("Azul");
		Cat c2 = new Cat("Amarelo");
		Cat c3 = new Cat("Encarnado");
		Cat c4 = new Cat("Encarnado");

		try {
			cr.put(c1);
		}
		catch (DuplicateCatException e) {
			System.out.println(e);
		}

		try {
			cr.put(c2);
		}
		catch (DuplicateCatException e) {
			System.out.println(e);
		}

		try {
			cr.put(c2);
		}
		catch (DuplicateCatException e) {
			System.out.println(e);
		}
		try {
			cr.put(c3);
		}
		catch (DuplicateCatException e) {
			System.out.println(e);
		}

		try {
			cr.put(c4);
		}
		catch (DuplicateCatException e) {
			System.out.println(e);
		}

		try {
			cr.get("Azul");
		}
		catch (NoSuchCatException e) {
			System.out.println(e);
		}

		try {
			System.out.println((cr.get("Encarnado") == c3 ? "c3" : "c4"));
		}
		catch (NoSuchCatException e) {
			System.out.println(e);
		}

		try {
			cr.get("Amarelo");
		}
		catch (NoSuchCatException e) {
			System.out.println(e);
		}

		try {
			cr.get("Vermelho Azulado");
		}
		catch (NoSuchCatException e) {
			System.out.println(e);
		}


		try {
			cr.get("Verde");
		}
		catch (NoSuchCatException e) {
			System.out.println(e);
		}



	}
}