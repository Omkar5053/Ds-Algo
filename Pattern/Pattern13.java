package Pattern;

public class Pattern13 {
    public static void main(String args[])
    {
        printPatten();
    }

    private static void printPatten() {
        int i,j,k;
        for(i=1;i<=7;i++)
        {
            k=7-i;
            for(j=1;j<=7;j++)
            {
                if(j<=8-i)
                {
                    System.out.print(k);
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
