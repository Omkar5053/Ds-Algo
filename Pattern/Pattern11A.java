package Pattern;

import java.util.Scanner;

public class Pattern11A {
    public static void main(String args[])
    {
        printPatten();
    }

    private static void printPatten() {
        int i,j,k=0,rows;
        System.out.println("Enter the no of rows : ");
        Scanner sc =  new Scanner(System.in);
        rows = sc.nextInt();
        for(i=1;i<=rows;i++)
        {
            if(rows % 2 == 0)
            {
                if(i<=rows/2)
                    k++;
                if(i> rows/2 + 1)
                    k--;
            }
            else
            {
                if(i<=(rows+1)/2)
                    k++;
                else
                    k--;
            }
            for(j=1;j<=(rows+1)/2;j++)
            {
                if(j<=k)
                {
                    System.out.print("*");
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
