public class A{
    public static void main(String[] args) {
        B b = new B();
        System.out.println(b);
    }
}
class B{

}


// how does its printing address of the java,

// Object class is the Super class of all Wrapper classes,
// when i tried to printing b [object]

//      Its trying to print b.tostring()

// tostring is not in class B,
//      tostring() is written in the OBEJCT class.
//                                  Super class of All classes



// OVERRIDE tostring() ->>>>// 
class C{                                        // by default, it returns the address of object
    public String toString(){                   // now , we are returing the String
        return "san";
    }
}