class ClassA
{
public
void aClass()
{
System.out.print("Iam a ClassA"+"\n");
}
}
class ClassB extends ClassA
{
public
void bClass()
{
System.out.print("Iam a ClassB"+"\n");
}
}
class ClassC extends ClassA
{
public
void cClass()
{
System.out.print("Iam a ClassC"+"\n");
}
}
/*class ClassD extends ClassA,ClassB
{
}*/

public class Diamond
{
public static void main(String[] args)
{
System.out.print("Diamond Problem"+"\n");
ClassB class1=new ClassB();
ClassC class2=new ClassC();
class1.aClass();
class1.bClass();
class2.aClass();
class2.cClass();
/*
Java does not support multiple inheritances to avoid the diamond problem which causes
complexity and ambiguity.
Well we can achieve multiple inheritance by the concept of interface.*/
}
}