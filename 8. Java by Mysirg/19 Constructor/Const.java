// Types of Constructors
public class Const {
    int balance;
    // Default Constructor
    public Const(){
        balance = 0;
    }
    // Parameterized Constructor
    public Const(int k){
        balance = k;
    }
    // Copy Constructor
    public Const(Const v){
        balance = v.balance;
    }
    public static void main(String[] args){
//
    }
}