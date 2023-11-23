package Problema_42;

import java.util.Scanner;

public class Problema42 {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    while (scanner.hasNext()) {
      int numero = scanner.nextInt();

      if (numero == 42) break;

      System.out.println(numero);
    }

    scanner.close();
  }
}
