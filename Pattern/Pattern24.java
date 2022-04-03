package Pattern;

public class Pattern24 {
    public static void main(String args[])
    {
        printPatten();
    }

    private static void printPatten() {
        int i,j;
        for(i=1;i<=7;i++)
        {
            for(j=1;j<=7;j++)
            {
                if((i==1 || i==7 || j==1 || j==7) || (i>=3 && i<=5 && j>=3 && j<=5) && (i==3 || i==5 || j==3 || j==5))
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
