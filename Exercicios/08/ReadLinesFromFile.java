import java.io.BufferedReader;
import java.io.FileReader;
public class ReadLinesFromFile {
	public static void main(String[] args) {
		String longestLine = ""; 
		
		try {
			BufferedReader in = new BufferedReader(new FileReader(args[0]));
			String thisLine = new String();
			while ((thisLine = in.readLine()) != null)
				if (thisLine.length() > longestLine.length())
					longestLine = thisLine;
		}

		catch(Exception e) { System.out.println("EXPT"); }
		
		System.out.println(longestLine);
	}
}
