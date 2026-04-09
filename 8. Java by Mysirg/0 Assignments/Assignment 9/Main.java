public class Main{
    public static void main(String[] args) {
        //1
        Circle c = new Circle();
        c.setRadius(3.5);
        System.out.println("Radius: "+c.getRadius());
        System.out.println("Area: "+c.getArea());
        System.out.println("Circumference: "+c.getCircumference()+"\n");

        //2
        MarkSheet ms = new MarkSheet();
        ms.setPhysics(85);
        ms.setMathematics(90);
        ms.setChemistry(78);
        ms.setEnglish(88);
        ms.setHindi(92);
        
        //3
        System.out.println("Physics: "+ms.getPhysics());
        System.out.println("Mathematics: "+ms.getMathematics());
        System.out.println("Chemistry: "+ms.getChemistry());
        System.out.println("English: "+ms.getEnglish());
        System.out.println("Hindi: "+ms.getHindi());
        System.out.println("Maximum Marks: "+ms.getMaximumMarks());
        //4
        System.out.println("Average: "+ms.Average());
        //5
        System.out.println("Result (Pass Marks=40): "+ms.isPass(40));

    }
}

// 1.  Define a class Circle with member variable radius. Provide methods like setRadius, getRadius, getArea, getCircumference.
//     Use wrapper classes instead of primitives.
class Circle{
    private Double radius;
    public void setRadius(Double r){ this.radius = r; }
    //  getRadius, getArea, getCircumference
    public Double getRadius(){ return radius; }
    public Double getArea(){ return radius*radius*22/7; }
    public Double getCircumference(){ return 2*22*radius/7; }

}

// 2.  Define a class MarkSheet with properties to hold marks of five subjects (like physics, mathematics, chemistry, English and Hindi).
//     Provide setters and getters.
//     Use Wrapper classes instead of primitives.
class MarkSheet{
    private Integer physics, mathematics, chemistry, english, hindi;
    public void setPhysics(Integer p){ physics = p; }
    public void setMathematics(Integer m){ mathematics = m; }
    public void setChemistry(Integer c){ chemistry = c; }
    public void setEnglish(Integer e){ english = e; }
    public void setHindi(Integer h){ hindi = h; }

    public Integer getPhysics(){ return physics; }
    public Integer getMathematics(){ return mathematics; }
    public Integer getChemistry(){ return chemistry; }
    public Integer getEnglish(){ return english; }
    public Integer getHindi(){ return hindi; }


//     3. provide a method to find maximum marks.
    public Integer getMaximumMarks(){
        Integer max = physics;
        if(max<mathematics)max = mathematics;
        if(max<chemistry)max = chemistry;
        if(max<english)max = english;
        if(max<hindi)max = hindi;
        return max;
    }
//     4. provide a method to find average of marks in all subjects.
    public Double Average(){
        return (physics+mathematics+chemistry+english+hindi)/5.0;
    }
//     5. provide a method to find result as pass or fail. passing marks is taken as argument.
    public String isPass(Integer k){
        if( k<physics || k< mathematics || k<chemistry || k<english || k<hindi)
            return "Fail";
        else
            return "Pass";
    }
}