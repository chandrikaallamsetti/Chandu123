class Mul2int
{
int multiply(int a,int b)
{
return a*b;
}
}
class Mul3int extends Mul2int
{
int multiply(int a,int b,int c)
{
return a*b*c;
}
}
public class OverloadingInheritance
{
public static void main(String[] args)
{
Mul3int obj=new Mul3int();
System.out.println("The product of two numbers : "+obj.multiply(2,3));
System.out.println("The product of three numbers : "+obj.multiply(2, 4, 8));
}
}
