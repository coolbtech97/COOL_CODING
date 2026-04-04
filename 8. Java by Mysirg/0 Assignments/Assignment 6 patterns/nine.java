public class nine{
    public static void main(String[] args){
        for(int i=0;i<5;i++){
            char c = 'A';
            for(int k=0;k<i;k++)c++;
            for(int j=0;j<=i;j++)
                    System.out.print("  ");
            for(int j=0;j+i<5;j++)
                    System.out.print(c+++" ");
            System.out.println();
        }
    }
}
//     ABCDE
//      BCDE
//       CDE
//        DE
//         E