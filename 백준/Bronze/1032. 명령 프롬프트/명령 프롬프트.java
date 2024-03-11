import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        String[] arr = new String[n];
        for (int i = 0; i < n; i++) {
            arr[i] = br.readLine();  //파일 이름 배열에 저장하기
        }

        String answer = "";
        // System.out.printf("%c", arr[0].charAt(0));

        for (int i = 0 ; i < arr[0].length(); i++){

            char check = arr[0].charAt(i); 

            for (int j = 1 ; j < n ; j++){
                if (arr[j].charAt(i) != check){
                    check = '?'; 
                    break;
                }
            }

            answer += check;
        } 

        System.out.printf("%s", answer);
    }
}
