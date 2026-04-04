public class four{
    public static void main(String[] args){
        for(int i=5-1;i>=0;--i){
            for(int j=0;i+j<5;j++)
                System.out.print("  ");
            for(int j=0;j<=i;j++)
                    System.out.print("* ");
            System.out.println();
        }
    }
}
//     * * * * *
//       * * * *
//         * * *
//           * *
//             *