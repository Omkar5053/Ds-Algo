package Pattern;

import java.util.Scanner;

public class pattern10A {
    public static void main(String[] args) {
        printPattern();
    }

    private static void printPattern() {
        int i,j,k=0,rows,n;
        System.out.println("Enter the numbers of rows : ");
        Scanner sc =  new Scanner(System.in);
        rows = sc.nextInt();
        n = (rows+1)/2;
        for(i=1;i<=rows;i++)
        {
            if(rows%2 == 0)
            {
                if(i<=n) k++;
                if(i>n+1) k--;
            }
            else
            {
                if(i<=n)
                    k++;
                else
                    k--;
            }
            for(j=1;j<=rows;j++)
            {
                if(j>=(n+1)-k && j<=(n-1)+k)
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            System.out.println();
        }
    }
}
