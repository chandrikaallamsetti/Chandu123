class Lion
{
public
void displayBreed()
{
System.out.print("I belong to carnivore type\nI belong to genus Panthera\n");
}
void eat()
{
System.out.print("I eat cheese and meat\n");
}
}
class Cub extends Lion
{
public
void play()
{
System.out.print("I play a lot\nIt helps to bond with my family\n");
}
void skills()
{
    System.out.print("With this I develop lot of skills that I could use later\n");
}
}
public class simpleinheritance
{
public static void main(String[] args)
{
Cub baby=new Cub();
baby.displayBreed();;
baby.eat();
baby.play();
baby.skills();
}
}
