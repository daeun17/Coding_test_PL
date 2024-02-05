import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        // N, M, K를 공백을 기준으로 구분하여 입력 받기
        int m = scanner.nextInt();
        int n = 1000 - m;
        int[] coin = {500, 100, 50, 10, 5, 1};

        int count = 0;
        for (int i = 0 ; i < 6 ; i++) {
            count += n/coin[i];
            n -= (n/coin[i]) * coin[i];
        }

        System.out.println(count);

    }
}