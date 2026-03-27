public class two{
    public static void main(){
        for(int i=5-1;i>=0;--i){
            for(int j=0;j<=i;j++)
                    System.out.print("  ");
                for(int x=1;i+x<=5;++x)
                    System.out.print("* ");
            System.out.println();
        }
    }
}
//             *
//           * *
//         * * *
//       * * * *
//     * * * * *