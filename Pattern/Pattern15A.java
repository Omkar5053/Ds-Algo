package Pattern;

public class Pattern15A {
    public static void main(String args[])
    {
        printPatten();
    }

    private static void printPatten() {
        int i,j,k=0,x;
        for(i=1;i<=9;i++)
        {
            x=1;
            if(i<=5)
                k++;
            else
                k--;
            for(j=1;j<=5;j++)
            {
                if(j>=6-k)
                {
                    System.out.print(x);
                    x++;
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
