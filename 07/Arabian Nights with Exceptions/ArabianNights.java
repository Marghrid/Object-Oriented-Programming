import arabiannights.*;

public class ArabianNights {
	public static void main (String[] args) {

// Criar uma lâmpada mágica com capacidade para 4 génios.
		MagicLamp lamp = new MagicLamp(4);

// Esfregar 5 vezes a lâmpada, indicando os números de desejos 2, 3, 4, 5, 1.
		Genie g1 = lamp.rub(2);
		Genie g2 = lamp.rub(3);
		Genie g3 = lamp.rub(4);
		Genie g4 = lamp.rub(5);
		Genie g5 = lamp.rub(1);

		System.out.println();

// Invocar e imprimir o resultado do método toString sobre cada um dos génios.
		System.out.println(g1);
		System.out.println(g2);
		System.out.println(g3);
		System.out.println(g4);
		System.out.println(g5);
		
		System.out.println();

// Pedir um desejo a cada um dos génios.
		try {
			g1.grantWish();
		} catch (SomethingWrongWithGenieException e) {
			System.out.println(e.getMessage());
		}

		try {
			g2.grantWish();
		} catch (SomethingWrongWithGenieException e) {
			System.out.println(e.getMessage());
		}

		try {
			g3.grantWish();
		} catch (SomethingWrongWithGenieException e) {
			System.out.println(e.getMessage());
		}

		try {
			g4.grantWish();
		} catch (SomethingWrongWithGenieException e) {
			System.out.println(e.getMessage());
		}

		try {
			g5.grantWish();
		} catch (SomethingWrongWithGenieException e) {
			System.out.println(e.getMessage());
		}

		System.out.println();

// Invocar e imprimir o resultado do método toString sobre cada um dos génios.
		System.out.println(g1);
		System.out.println(g2);
		System.out.println(g3);
		System.out.println(g4);
		System.out.println(g5);

		System.out.println();

// Pedir um desejo a cada um dos génios.

		try {
			g1.grantWish();
		} catch (SomethingWrongWithGenieException e) {
			System.out.println(e.getMessage());
		}

		try {
			g2.grantWish();
		} catch (SomethingWrongWithGenieException e) {
			System.out.println(e.getMessage());
		}

		try {
			g3.grantWish();
		} catch (SomethingWrongWithGenieException e) {
			System.out.println(e.getMessage());
		}

		try {
			g4.grantWish();
		} catch (SomethingWrongWithGenieException e) {
			System.out.println(e.getMessage());
		}

		try {
			g5.grantWish();
		} catch (SomethingWrongWithGenieException e) {
			System.out.println(e.getMessage());
		}

		System.out.println();

// Invocar e imprimir o resultado do método toString sobre cada um dos génios.
		System.out.println(g1);
		System.out.println(g2);
		System.out.println(g3);
		System.out.println(g4);
		System.out.println(g5);

		System.out.println();

// Colocar o demónio reciclável na lâmpada.
		lamp.feedDemon((Demon)g5);

// Esfregar a lâmpada, indicando 7 como número de desejos.
		Genie g6 = lamp.rub(7);

		System.out.println();

// Invocar e imprimir o resultado do método toString sobre o génio obtido.
		System.out.println(g6);
	}
}