package Pattern;

public class Pattern6 {
    public static void main(String args[])
    {
        printPatten();
    }

    private static void printPatten() {
        int i,j;
        boolean k;
        for(i=1;i<=5;i++)
        {
            k=true;
            for(j=1;j<=9;j++)
            {
                if(j>=6-i && j<=4+i && k)
                {
                    System.out.print("*");
                    k=false;
                }
                else
                {
                    System.out.print(" ");
                    k=true;
                }
            }
            System.out.println();
        }
    }
}
