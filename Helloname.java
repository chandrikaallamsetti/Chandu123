import java.lang.*;
import java.util.Scanner;
public class Helloname{
    public static void main(String[] args){
        Scanner input=new Scanner(System.in);
        System.out.println("Enter Your name : ");
        String username=input.next();
        System.out.println("Hello "+username);
    }
}
