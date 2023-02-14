package cfc.c826d3;

import java.util.ArrayDeque;
import java.util.Scanner;

public class p2 {
    public static void solve() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();

        ArrayDeque<Integer> d = new ArrayDeque<Integer>(n);
        
        for(int i = 1; i <= n; i++) {
            d.addFirst(i);
        }

        for(int i = 0; i < n/2; i++) {
            d.addFirst(d.getFirst());
            d.pop();
        }

        if(d.size() == 3) {
            System.out.println(-1);
        } else {
            for(int i = 0; i < n; i++) {
                System.out.print(d.getFirst() + " ");
                d.pop();
            }
            System.out.println("");
        }

    }

    public static void main(String[] args) {
        int t = 1;

        for(int pp  = 0; pp < t; pp++){
            solve();
        }
    }
}
