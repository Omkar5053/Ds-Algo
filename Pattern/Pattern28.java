package Pattern;

public class Pattern28 {
    public static void main(String args[])
    {
        printPatten();
    }

    private static void printPatten() {
        int i,j,k=0,flag,p;
        for(i=1;i<=5;i++)
        {
            if(i%2 == 1)
                k = k+1;
            else
            {
                k--;
                k=k+i;
            }
            flag = 1;
            p = k;
            for(j=1;j<=9;j++)
            {
                if(j<=2*i-1)
                {
                    if(flag == 1){
                        System.out.print(p);
                        if(i%2==0)
                        {
                            k++;
                            p++;
                        }
                        else
                            p--;
                    }
                    else
                        System.out.print("*");
                    flag = 1 - flag;
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
