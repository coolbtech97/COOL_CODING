public class eight{
    public static void main(){
        Integer n = 0;
        for(int i=0;i<4;i++){
            for(int j=0;j<=i;j++)
                    System.out.print(++n+" ");
            System.out.println();
        }
    }
}

//     1
//     2 3
//     4 5 6
//     7 8 9 10