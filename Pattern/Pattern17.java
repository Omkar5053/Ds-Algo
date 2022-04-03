package Pattern;

public class Pattern17 {
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
                if(j==i || j==8-i)
                {
                    if(i==j)
                        System.out.print("\\");
                    else
                        System.out.print("/");
                }
                else
                {
                    System.out.print("*");
                }
            }
            System.out.println();
        }
    }
}
