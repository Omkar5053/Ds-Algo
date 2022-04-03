package Pattern;

public class Pattern23 {
    public static void main(String args[])
    {
        printPatten();
    }

    private static void printPatten() {
        int i,j,k;
        for(i=1;i<=6;i++)
        {
            k = 1;
            for(j=1;j<=6;j++)
            {
                if(j<=i)
                {
                        System.out.print(k);
                        k = 1 - k;
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



/*
if(j<=i)
        {
        if(j%2 == 0){
        k = 0;
        System.out.print(k);
        }
        else
        {
        k = 1;
        System.out.print(k);
        }
        }*/
