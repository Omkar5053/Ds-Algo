package Pattern;

public class Pattern25 {
    public static void main(String args[])
    {
        printPatten();
    }

    private static void printPatten() {
        int i,j,k=1,n=11,m=0;
        for(i=1;i<=21;i++)
        {
            if(i<=n)
                m++;
            else
                m--;
            k = m-1;
            for(j=1;j<=21;j++)
            {
                if(j>=n+1-m && j<=n-1+m)
                {
                    System.out.print(j<n ? k++%10 : k--%10);
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