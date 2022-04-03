package Pattern;

import java.util.Scanner;

public class Pattern23A {
    public static void main(String args[])
    {
        printPatten();
    }

    private static void printPatten() {
        int i,j,k,rows;
        System.out.println("Enter the number of rows : ");
        Scanner sc = new Scanner(System.in);
        rows = sc.nextInt();
        for(i=1;i<=rows;i++)
        {
            k = 1;
            for(j=1;j<=rows;j++)
            {
                if(j<=i)
                {
                        System.out.print(k);
                        k = 1 - k;
                }
                else
                {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}



/*
if(j<=i)
        {
        if(j%2 == 0){
        k = 0;
        System.out.print(k);
        }
        else
        {
        k = 1;
        System.out.print(k);
        }
        }*/
