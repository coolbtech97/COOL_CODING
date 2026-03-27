public class seven{
    public static void main(){
        for(int i=4;i>-1;--i){
            for(int j=0;j+i<=5;j++)
                System.out.print("  ");
            char c = 'A';
            for(int j=0;j<=i;j++)
                System.out.print((c++)+" ");
            System.out.println();
        }
    }
}

//     A B C D E
//       A B C D
//         A B C
//           A B
//             A