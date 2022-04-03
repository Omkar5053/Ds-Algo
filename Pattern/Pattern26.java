package Pattern;

public class Pattern26 {
    public static void main(String args[])
    {
        printPatten();
    }

    private static void printPatten() {
        int i,j;
        int k = 64;
        for(i=1;i<=4;i++)
        {
            k = k + i;
            for(j=1;j<=4;j++)
            {
                if(j<=i)
                {
                    System.out.print((char)k);
                    k--;
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
