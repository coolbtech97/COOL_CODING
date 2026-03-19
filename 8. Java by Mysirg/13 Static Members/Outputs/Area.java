//       public class Area{
//           private int radius=5;
//           float area(){       
//               //calculate area here
//           }
//           public static void main(String []args){
//               //print area here
//           }
//       }

//correct code
// public class Area{
//     private static int radius=5;
//     static float area(){
//         float d =1.0f;
//         d*=radius;
//         d*=radius;
//         d*=22;
//         d/=7;
//         return d;
//     }
//     public static void main(String []args){
//         System.out.println("Area of radius = "+radius+" is "+area());
//     }
// }

/*
//Errors
    -> area() is an "Instance Method",
        so, static main() cannot use non-static member function,
        OR we can create an object to use non static members,,,...
*/

// Code by MysirG
public class Area{
    private int radius = 5;
    float area(){
        return 3.14f*radius*radius;
    }
    public static void main(String []args){
        Area a1 = new Area();
        float f1 = a1.area();
        System.out.println("Area: "+f1);
    }
}