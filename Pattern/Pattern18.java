package Pattern;

public class Pattern18 {
    public static void main(String args[])
    {
        printPatten();
    }

    private static void printPatten() {
        int i,j,k=0;
        for(i=1;i<=9;i++)
        {
            if(i<=5)
                k++;
            else
                k--;
            for(j=1;j<=9;j++)
            {
                if(j<=6-k || j>=4+k)
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
