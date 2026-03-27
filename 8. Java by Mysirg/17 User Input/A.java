import java.util.Scanner;

class A{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // System.out.println("Enter your name and age: ");
        // String name = sc.next();
        // int age = sc.nextInt();
        // System.out.println("Name "+name);
        // System.out.println("Age "+age);


        String s = sc.next();
        while(!sc.hasNext())
            sc.next();
        int a = sc.nextInt();
    }
}