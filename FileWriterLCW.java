import java.io.*;

public class FileWriterLCW {
	public static void main(String[] args) {
		InputStreamReader in = new InputStreamReader(System.in);
		
		File src= new File(args[0]);		
		FileWriter fout = null;
		int c;
		try {

			fout = new FileWriter(src);
			while((c = in.read()) != -1) {
				fout.write(c);
			}
			in.close();
			fout.close();
		}catch(IOException e) {
			System.out.println("입출력 오류");
		}
	}
}
