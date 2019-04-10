import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.EOFException;
import java.io.IOException;
import java.io.UTFDataFormatException;


public class Escritor {
 
	public static void main(String[] args) {
 
		try {
 
			DataOutputStream out =
				new DataOutputStream(new BufferedOutputStream(new FileOutputStream("raw.dat")));
 			
 			out.writeUTF("Idade");
			out.writeInt(2);
			out.writeUTF("Peso");
			out.writeDouble(3.141516);
			out.writeUTF("Nome");
			out.writeUTF("Azulinho");
			out.close();
 
			DataInputStream in =
				new DataInputStream(new BufferedInputStream(new FileInputStream("raw.dat")));
 
 			System.out.println(in.readUTF());
 			System.out.println(in.readInt());
			System.out.println(in.readUTF());
			System.out.println(in.readDouble());
			System.out.println(in.readUTF());
			System.out.println(in.readUTF());
 
		}

		catch(EOFException e) { e.printStackTrace(); }
		catch(UTFDataFormatException e) { e.printStackTrace(); }
		catch(IOException e) { e.printStackTrace(); }
	}
 
}