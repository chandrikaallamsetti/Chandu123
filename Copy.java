import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
public class Copy
{
public static void main(String[] args)
{
int temp;
try(FileInputStream object1=new FileInputStream("src.txt");
FileOutputStream object2=new FileOutputStream("dest.txt");)
{
while((temp=object1.read())!=-1)
{
object2.write(temp);
}
System.out.println("Successfully Copied!");
}
catch(FileNotFoundException e)
{
    System.out.println("File not found : "+e.getMessage());
    }
    catch(IOException e)
    {
    System.out.println("Error copying file : "+e.getMessage());
    }
    }
}