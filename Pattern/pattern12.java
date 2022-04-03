package Pattern;

public class pattern12 {
    public static void main(String[] args) {
        printPattern();
    }

    private static void printPattern() {
        int i,j,k;
        for(i=1;i<=4;i++)
        {
            k=i;
            for(j=1;j<=7;j++)
            {
                if(j>=5-i && j<=3+i)
                {
                    System.out.print(k);
                    if(j<4)
                        k++;
                    else
                        k--;
                }

                else
                    System.out.print(" ");
            }
            System.out.println();
        }
    }
}
