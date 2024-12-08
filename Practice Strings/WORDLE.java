
import java.util.Scanner;

class Wordle {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t_case = sc.nextInt();
        sc.nextLine();
        for (int t = 0; t < t_case; t++) {
            String s1 = sc.nextLine();
            char s11[] = s1.toCharArray();
            String s2 = sc.nextLine();
            char s22[] = s2.toCharArray();
            char M[] = new char[5];
            for (int i = 0; i < 5; i++) {
                if (s11[i] == s22[i]) {
                    M[i] = 'G';
                } else {
                    M[i] = 'B';
                }
            }
            String str = M.toString();
            System.out.println(M);
        }
    }
}
