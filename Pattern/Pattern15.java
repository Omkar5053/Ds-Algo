package Pattern;

public class Pattern15 {
    public static void main(String args[])
    {
        printPatten();
    }

    private static void printPatten() {
        int i,j,k;
        for(i=1;i<=9;i++)
        {
            k=1;
            for(j=1;j<=5;j++)
            {
                if(j>=6-i && j>=i-4)
                {
                    System.out.print(k);
                    k++;
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
