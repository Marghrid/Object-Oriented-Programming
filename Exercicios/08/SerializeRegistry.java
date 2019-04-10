import java.io.ObjectOutputStream;
import java.io.ObjectInputStream;
import java.io.BufferedOutputStream;
import java.io.BufferedInputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;

import java.io.IOException;


public class SerializeRegistry {
	public static void main(String[] args) {
		CatRegistry r = new CatRegistry();

		Cat c1 = new Cat("Azul", 2, 3.444);
		Cat c2 = new Cat("David", 3, 4.567);

		r.put(c1);
		r.put(c2);

		try {
			ObjectOutputStream out = new ObjectOutputStream(new BufferedOutputStream(new FileOutputStream("reg.dat")));
			out.writeObject(r);
			out.close();
		}
		catch(IOException e) { e.printStackTrace(); }

		try {
			ObjectInputStream in = new ObjectInputStream(new BufferedInputStream(new FileInputStream("reg.dat")));
			CatRegistry readReg = (CatRegistry)in.readObject();
			System.out.println(readReg.get("Azul"));
			System.out.println(readReg.get("David"));
		}
		catch(IOException e) { e.printStackTrace(); }
		catch(ClassNotFoundException e) { e.printStackTrace(); }
	}
}