package q4;

public class Main {
    public static void main(String[] args) {
        Employee employee = new Employee();
        employee.setEmpid(101);
        employee.setName("Alice");
        employee.setSalary(55000.0);

        System.out.println("Employee ID: " + employee.getEmpid());
        System.out.println("Name: " + employee.getName());
        System.out.println("Salary: " + employee.getSalary());
    }
}
