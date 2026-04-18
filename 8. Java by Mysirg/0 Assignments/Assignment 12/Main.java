public class Main{
    public static void main(String[] args) {System.out.println();
        first_n(6);
        first_nRev(5);
        first_n_odd(12);
        first_n_oddRev(15);
        first_n_even(14);
        first_n_evenRev(16);
        square(6);
        cubes(4);
        table(8);
    }
    
// 1.  Write a Java program to print first N natural numbers.
    private static void first_n(int n){
        System.out.println("First "+n+" natural numbers: ");
        for(int i=1;i<=n;i++)
            System.out.print(i+" ");
        System.out.println("\n");
    }

// 2.  Write a Java program to print first N natural numbers in reverse order.
    private static void first_nRev(int n){
        System.out.println("First "+n+" natural numbers in reverse order: ");
        for(int i=n;i>0;--i)
            System.out.print(i+" ");
        System.out.println("\n");
    }

// 3.  Write a Java program to print first N odd natural numbers.
    private static void first_n_odd(int n){
        System.out.println("First "+n+" odd natural numbers: ");
        for(int i=1;i<=n;i+=2)
            System.out.print(i+" ");
        System.out.println("\n");
    }

// 4.  Write a Java program to print first N odd natural numbers in reverse order.
    private static void first_n_oddRev(int n){
        System.out.println("First "+n+" odd natural numbers in reverse order: ");
        for(int i=1;i<=n;i+=2)
            System.out.print(i+" ");
        System.out.println("\n");
    }

// 5.  Write a Java program to print first N even natural numbers.
    private static void first_n_even(int n){
        System.out.println("First "+n+" even natural numbers: ");
        for(int i=2;i<=n;i+=2)
            System.out.print(i+" ");
        System.out.println("\n");
    }

// 6.  Write a Java program to print first N even natural numbers in reverse order.
    private static void first_n_evenRev(int n){
        System.out.println("First "+n+" even natural numbers in reverse order: ");
        for(int i=n%2==0?n:n-1;i>0;i-=2)
            System.out.print(i+" ");
        System.out.println("\n");
    }

// 7.  Write a Java program to print squares of first N natural numbers.
    private static void square(int n){
        System.out.println("First squares of "+n+" natural numbers: ");
        for(int i=1;i<=n;i++)
            System.out.print(i*i+" ");
        System.out.println("\n");
    }


// 8.  Write a Java program to print cubes of first N natural numbers.
    private static void cubes(int n){
        System.out.println("First cubes of "+n+" natural numbers: ");
        for(int i=1;i<=n;i++)
            System.out.print(i*i*i+" ");
        System.out.println("\n");
    }

// 9. Write a Java program to print table of N.
    private static void table(int n){
        System.out.println("Table of "+n+" :");
        for(int i=1;i<11;i++)
            System.out.print(n+" * "+i+" = "+n*i);
        System.out.println("\n");
    }
}