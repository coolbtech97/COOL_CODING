public class ten{
    void star(Integer n){
        for(int i=1;i<=n;i++){
            if(i==1||i==n)
                for(int i2=0;i2<n;i2++)
                    System.out.print("* ");
            else
                for(int i2=1;i2<=n;i2++)
                    if(i2==1||i2==n)
                        System.out.print("* ");
                    else
                        System.out.print("  ");
            System.out.println();
        }
    }
    public static void main(String[] args){
        Integer n = 5;
        new ten().star(n);
    }
}

//     * * * * *
//     *       *
//     *       *
//     *       *
//     * * * * *