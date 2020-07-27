package com.company;
import java.util.Scanner;
public class Main {

    public static void main(String[] args) {
        System.out.println("Введите строку");
        Scanner scan = new Scanner(System.in); 
        String str = scan.nextLine();
        char[] str1 = new char[str.length()];
        for (int i = 0; i < str.length(); i++) {
            str1[i] = str.charAt(i);
        }
        int n = str.length();
        for (int i=0; i< n/2; i++) {
            if (str1[i] == ';') {
                str1[i] = '.';
            }
        }
        for ( int i=n/2; i< n; i++) {
            if (str1[i] == '!'){
                str1[i] = '.';
            }
        }
        System.out.print("Измененная строка: ");
        for (int i=0; i< n; i++){
            System.out.print(str1[i]);
        }
    }
}

