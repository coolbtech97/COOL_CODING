public class Main {
    public static void main(String[] args) {
        //1
        System.out.println("Run question-wise classes directly with command line arguments.");
        System.out.println("Example: java Add 4 5");
    }
}

// 1.  Write a java program to add two numbers. Numbers are provided through command line.
class Add{
    public static void main(String[] args) {
        Integer a = Integer.parseInt(args[0]);
        Integer b = Integer.parseInt(args[1]);

        Integer c = a+b;
        System.out.println(c);
    }// Write: java Add 4 5
}

// 2.  Write a java program to add N numbers. Numbers are provided through command line.
class AddN{
    public static void main(String[] args) {
        Integer sum = 0;
        for (String s : args) {
            sum += Integer.parseInt(s);
        }
        System.out.println(sum);
    }// Write: java AddN 1 2 3 4 5
}

// 3.  Write a java program to print all the strings supplied through command line.
class PrintStrings {
    public static void main(String[] args) {
        for (String s : args) {
            System.out.println(s);
        }
    }// Write: java PrintStrings anand kumar rajak
}

// 4.  Write a java program to calculate LCM of two numbers. Numbers are provided through command line.
class LCM {
    private static Integer gcd(Integer a, Integer b) {
        a = Math.abs(a);
        b = Math.abs(b);
        while (b != 0) {
            Integer t = a % b;
            a = b;
            b = t;
        }
        return a;
    }

    public static void main(String[] args) {
        Integer a = Integer.parseInt(args[0]);
        Integer b = Integer.parseInt(args[1]);
        Integer lcm = Math.abs(a * b) / gcd(a, b);
        System.out.println(lcm);
    }// Write: java LCM 10 25
}

// 5.  Write a java program to check whether a given number is a Prime number o tr not. Number is provided through command line.
class PrimeCheck {
    private static boolean isPrime(Integer n) {
        if (n == null || n < 2) {
            return false;
        }
        if (n == 2) {
            return true;
        }
        if (n % 2 == 0) {
            return false;
        }
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Integer n = Integer.parseInt(args[0]);
        System.out.println(isPrime(n) ? "Prime" : "Not Prime");
    }// Write: java PrimeCheck 271
}

// 6.  Write a java program to filter and print numbers which are prime. Numbers are provided through command line.
class PrimeFilter {
    private static boolean isPrime(Integer n) {
        if (n == null || n < 2) {
            return false;
        }
        if (n == 2) {
            return true;
        }
        if (n % 2 == 0) {
            return false;
        }
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        for (String s : args) {
            Integer n = Integer.parseInt(s);
            if (isPrime(n)) {
                System.out.print(n + " ");
            }
        }
    }// Write: java PrimeFilter 271 432 53 646
}

// 7.  Write a java program to calculate factorial of a number. Number is provided through command line.
class Factorial {
    public static void main(String[] args) {
        Integer n = Integer.parseInt(args[0]);
        Long fact = 1L;
        for (int i = 2; i <= n; i++) {
            fact *= i;
        }
        System.out.println(fact);
    }// Write: java Factorial 8
}

// 8.  Write a java program to sum of digits of a number. Number is provided through command line.
class SumOfDigits {
    public static void main(String[] args) {
        Integer n = Math.abs(Integer.parseInt(args[0]));
        Integer sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        System.out.println(sum);
    }// Write: java SumOfDigits 498
}

// 9.  Write a java program to find the greatest number among all the numbers provided through command line.
class Greatest {
    public static void main(String[] args) {
        Integer max = Integer.parseInt(args[0]);
        for (int i = 1; i < args.length; i++) {
            Integer n = Integer.parseInt(args[i]);
            if (n > max) {
                max = n;
            }
        }
        System.out.println(max);
    }// Write: java Greatest 23 53 54 76 27 45
}

// 10. Write a java program to calculate HCF of two numbers. Numbers are provided through command line.
class HCF {
    public static void main(String[] args) {
        Integer a = Math.abs(Integer.parseInt(args[0]));
        Integer b = Math.abs(Integer.parseInt(args[1]));
        while (b != 0) {
            Integer t = a % b;
            a = b;
            b = t;
        }
        System.out.println(a);
    }// Write: java HCF 23 33
}