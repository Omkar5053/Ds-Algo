package Pattern;

public class Pattern20 {
    public static void main(String args[])
    {
        printPatten();
    }

    private static void printPatten() {
        int i,j,k;
        char c;
        for(i=1;i<=4;i++)
        {
            k = 1;
            c = 'A';
            for(j=1;j<=8;j++)
            {
                if(j>=5-i && j<=4+i)
                {
                    if(j<=4) {
                        System.out.print(c);
                        c++;
                    }
                    else
                    {
                        System.out.print(k);
                        k++;
                    }
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


/*for(i=1;i<=4;i++)
        {
        k = 'A';
        for(j=1;j<=8;j++)
        {
        if(j>=5-i && j<=4+i)
        {
        if(j==4) {
             k = '1';
        }
        System.out.print(k);
        k++;
        }
        else
        {
        System.out.print(" ");
        }
        }
        System.out.println();
        }*/
