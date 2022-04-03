package Pattern;

public class Pattern22 {
    public static void main(String args[])
    {
        printPatten();
    }

    private static void printPatten() {
        int i,j;
        char k;
        for(i=1;i<=4;i++)
        {
            k = '1';
            for(j=1;j<=7;j++)
            {
                if(j>=5-i && j<=3+i)
                {
                    if(j==5)
                        k = 'A';
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
