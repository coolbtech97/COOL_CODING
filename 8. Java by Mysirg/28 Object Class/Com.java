public class Com {
    public static void main(String[] args) {
        Complex z = new Complex();
        z.setComplex(3,4);
        System.out.println(z);

        Complex a1 = new Complex(3,4);
        Complex a2 = new Complex(3,4);

        // a1 == a2;    // false, memory not same,
        // a1.equals(a2)// false, We need to OVERRIDE THIS METHOD;
        
        System.out.println(a1.equals(a2));


        System.out.println(a1.getClass());
        System.out.println(a1.getClass().getName());

    }
}

class Complex {
    private int real, img;
    public Complex(){}
    public Complex(int z,int b){real=z;img=b;}
    public void setComplex(int a, int b){
        real = a;
        img = b;
    }
    public String toString(){
        String s;
        s = Integer.toString(real) + " + i"+Integer.toString(img);// long trick
        s = real+" + i"+img;
        return s;
    }

    public boolean equals(Complex z){
        if(this.real==z.real && this.img==z.img)
            return true;
        // else
            return false;
    }
}