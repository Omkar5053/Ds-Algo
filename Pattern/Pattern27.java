package Pattern;

public class Pattern27 {
    public static void main(String args[])
    {
        printPatten();
    }

    private static void printPatten() {
        int i,j,k=0;
        for(i=1;i<=4;i++)
        {
            k=i;
            for(j=1;j<=7;j++)
            {
                if(j>=5-i && j<=3+i)
                {
                    System.out.print(k);
                    if(j<4)
                        k--;
                    else
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
