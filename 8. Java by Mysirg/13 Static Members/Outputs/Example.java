public class Example{
    private int y;
    private static int z;
    public static void main(String []args){
        int x;
        // System.out.print("\nx="+x);
        // System.out.print("\ny="+y);
        System.out.print("\nz="+z);
    }
}


/*
//ERRORS
    1st print line
        -> x is a local variable, so it cannot use before initialisation
        -> y is an Intance Variable, need an OBJECT to use it   obj.y
            Even if theres Object,
                static member function cannot use non-static members    /\/\
        -> OK FINE
*/