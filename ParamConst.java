import java.util.*;
class Student
{   
    private String fullName="";
    private double semPerentage=0;
    private String collegeName="";
    private int collegeCode=0;
    //Default Constructor
    public Student()
    {
        collegeName="MVGR";
        collegeCode=33;
    }
    //Parameterized constructor
    public Student(String name, double percent)
    {
        fullName=name;
        semPerentage=percent;
    }    
    public void display()
    {
        System.out.println("Full name of the student is "+fullName);
        System.out.println("Sem percentage of the student is "+semPerentage);
        System.out.println("College name of the student is "+collegeName);
        System.out.println("College code of the student is "+collegeCode);
    }

    protected void finalize()
    {
        System.out.println("I'm Dead");
    }
}
public class ParamConst
{
    public static void main(String[] args)
    {   
        Scanner read=new Scanner(System.in);
        Student obj1=new Student();
        obj1.display();
        System.out.println();
        System.out.println("Enter the details of student (name,percentage) : ");
        String name=read.nextLine();
        double percent=read.nextDouble();
       
        Student obj2=new Student(name,percent);
        obj2.display();
        read.close();
        obj1 = null;
        obj2 = null;
        System.gc();
    }
}