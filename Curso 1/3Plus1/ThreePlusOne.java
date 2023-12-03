import java.util.Scanner;

public class ThreePlusOne {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    while (scanner.hasNext()) {
      int i, j, max_cycle_length = 0;

      i = scanner.nextInt();
      j = scanner.nextInt();

      for (int aux = Math.min(i, j); aux <= Math.max(i, j); aux++) {
        int n = aux, cont = 0;

        while (aux != Math.max(i, j) + 1) {
          cont++;

          if (n == 1) {
            if (cont > max_cycle_length) {
              max_cycle_length = cont;
            }
            break;
          } else if (n % 2 != 0) {
            n = 3 * n + 1;
          } else {
            n /= 2;
          }
        }
      }

      System.out.println(i + " " + j + " " + max_cycle_length);
    }

    scanner.close();
  }
}
