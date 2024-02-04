import java.lang.*;
import java.util.Scanner;
public class Calculator{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        float n1,n2;
        System.out.println("Enter number 1:");
        n1=input.nextFloat();
        System.out.println("Enter number 2:");
        n2=input.nextFloat();
        int choice;
        System.out.println("1.Addition,2.Substraction,3.Division,4.multiplication");
        System.out.println("Enter your choice : ");
        choice=input.nextInt();
        if(choice==1){
            System.out.println(n1+"+"+n2+"="+(n1+n2));
        }
        else if(choice==2){
             System.out.println(n1+"-"+n2+"="+(n1-n2));
        }
        else if(choice==3){
            if(n2!=0)
            {
               System.out.println(n1+"/"+n2+"="+(n1/n2));
            }
            else
            {
                System.out.println("Can't divide by zero");
            }
        }
        else if(choice==4){
             System.out.println(n1+"*"+n2+"="+(n1*n2));
        }
        else{
             System.out.println("Please enter correct choice");
        }
    }
}
