import java.util.*;
class Student
{   
    private String fullName;
    private int rollNum;
    private double semPerentage;
    private String collegeName;
    private int collegeCode;
    //Constructor
    public Student(String name, int roll, double percent, String collegename, int collegecode)
    {
        fullName=name;
        rollNum=roll;
        semPerentage=percent;
        collegeName=collegename;
        collegeCode=collegecode;
    }
    public void display()
    {
        System.out.println("Full name of the student is "+fullName);
        System.out.println("Roll number of the student is "+rollNum);
        System.out.println("Sem percentage of the student is "+semPerentage);
        System.out.println("College name of the student is "+collegeName);
        System.out.println("College code of the student is "+collegeCode);
    }


    protected void finalize()
    {
        System.out.println("I'm Dead");
    }
}
public class ConstDest
{
    public static void main(String[] args)
    {   
        Scanner read=new Scanner(System.in);
        System.out.println("Enter full name, rollno, sem percentage, college name, college code (enter each in a separate line) : ");
        String name=read.nextLine();
        int roll=read.nextInt();
        double percent=read.nextDouble();
        read.nextLine();                    //Consume the newline character
        String collegename=read.nextLine();
        int collegecode=read.nextInt();
        Student obj=new Student(name,roll,percent,collegename,collegecode);
        obj.display();
        read.close();
        
        obj=null;
        System.gc();
    }
}