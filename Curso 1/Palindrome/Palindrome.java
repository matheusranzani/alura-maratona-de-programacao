import java.util.Scanner;

public class Palindrome {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    int t = scanner.nextInt();
    for (int i = 1; i <= t; i++) {
      String word = scanner.next();

      boolean flag = true;
      for (int j = 0, k = word.length() - 1; j < word.length(); j++, k--) {
        if (word.toCharArray()[j] != word.toCharArray()[k]) {
          flag = false;
        }
      }

      if (flag) {
        System.out.println(i + " \"YES\"");
      } else {
        System.out.println(i + " \"NO\"");
      }
    }
    scanner.close();
  }
}
