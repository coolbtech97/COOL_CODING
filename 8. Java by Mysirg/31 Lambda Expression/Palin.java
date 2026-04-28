// 1 5 2 3 5 3 2 7 8
// public class palin {
//     public static boolean pali(int[] arr,int i,int j){
//         while(i<j)
//             if(arr[i++]!=arr[j--])return false;
//         return true;

//     }
//     public static int isPali(int[] arr,int end){
//         int start=0;
//         end--;
//         while(end<arr.length)
//             if(pali(arr,start,end)){
//                 return end-start+1;
//             }
//             else{
//                 end++;start++;
//             }
        
//         return -19;
//     }
//     public static void main(String []args){
//         // int []arr = {1,5,2,3,5,3,2,7,8};
//         boolean find = false;
//         int []arr = {1,5};
//         int s = arr.length;
//         while(s>1){
//             int k = isPali(arr, s--);
//             if(k !=-19 && ){
//                 s+=1;
//                 find = true;
//                 break;
//             }
//         }
//         if(find)
//             System.out.println("The longest String is "+s);
//         else
//             System.out.println("The longest String is of 1 size");
//         return;
//     }
// }

public class Palin {

    public static boolean isPali(int[] arr, int start, int end) {
        while (start<end)if(arr[start++]!=arr[end--])return false;
        return true;
    }

    public static int longestPalindrome(int[] arr) {
        int s = arr.length;
        while(s>1){
            int start=0;
            int end = s-1;
            while(end<s){
                if(isPali(arr, start, end))
                    return s;
                start++;


                
                end++;
            }
            --s;
        }
        return 0;
    }

    public static void main(String[] args) {
        int[] arr = {1, 5, 2, 3, 5, 3, 2, 7, 8};

        int result = longestPalindrome(arr);

        System.out.println("Longest palindrome length = " + result);
    }
}