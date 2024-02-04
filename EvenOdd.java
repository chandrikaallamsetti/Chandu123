import java.util.Scanner;
public class EvenOdd{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a positive number : ");
        int num;
        num=input.nextInt();
        EvenorOdd(num);
        input.close();
    }
    public static int EvenorOdd(int a){
        if(a==0)
        {
              System.out.println("The given number "+a+" is neither even nor odd");
        }
        else if(a>0)
        {
            if(a%2==0)
            {
                System.out.println("The given number "+a+" is an even number");
            }
             else{
                 System.out.println("The given number "+a+" is an odd number");
            }
        }
        else
        {
              System.out.println("Please enter positive number");
        }
        return 0;
    }
}