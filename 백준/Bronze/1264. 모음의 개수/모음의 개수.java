import java.io.*;
public class Main {

	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in)); 
		
		while(true) {
			String s = br.readLine();
			if(s.equals("#")){
				break;
			}
			char[] a = { 'a', 'e', 'i', 'o', 'u', 'A', 'E','I','O','U'};
			int result = 0; 
			for (int i = 0 ; i < s.length() ; i++ ) {
				for(int j = 0 ; j <a.length ; j++) {
					if(s.charAt(i) == a[j]) {
						result += 1; 
					}
				}
			}
			
			System.out.println(result);
		
			}
	}

}
