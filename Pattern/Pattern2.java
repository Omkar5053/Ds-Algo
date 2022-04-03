package Pattern;

public class Pattern2 {
    public static void main(String args[])
    {
        printPatten();
    }

    private static void printPatten() {
        int i,j;
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            {
                if(j>=6-i)
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
