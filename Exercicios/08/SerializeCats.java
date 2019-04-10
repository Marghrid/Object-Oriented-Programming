import java.io.ObjectOutputStream;
import java.io.ObjectInputStream;
import java.io.BufferedOutputStream;
import java.io.BufferedInputStream;
import java.io.FileOutputStream;
import java.io.FileInputStream;


public class SerializeCats {
	public static void main(String[] args) {
		Cat blue   = new Cat("Azul", 2, 2.45);
		Cat yellow = new Cat("Amarelo", 3, 4.45);
		Cat green  = new Cat("Verde", 1, 6.45);
		Cat purple = new Cat("Roxo", 0, 8.45);

		try {
			ObjectOutputStream out =
				new ObjectOutputStream(new BufferedOutputStream(new FileOutputStream("raw.dat")));

			out.writeObject(blue);
			out.writeObject(yellow);
			out.writeObject(green);
			out.writeObject(purple);

			out.close();

			ObjectInputStream in =
				new ObjectInputStream(new BufferedInputStream(new FileInputStream("raw.dat")));

			Cat cat1 = (Cat)in.readObject();
			Cat cat2 = (Cat)in.readObject();
			Cat cat3 = (Cat)in.readObject();
			Cat cat4 = (Cat)in.readObject();

			System.out.println(cat1);
			System.out.println(cat2);
			System.out.println(cat3);
			System.out.println(cat4);
		}
		catch(Exception e) { e.printStackTrace(); }
	}
}