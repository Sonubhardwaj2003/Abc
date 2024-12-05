import java.util.*;
public class readname {
    public static void main(String args[])
    {
        @SuppressWarnings("resource")
        Scanner s=new Scanner(System.in);
        String name;
        System.out.println("hlo mr. what is your name : ");
        name=s.nextLine();
        System.out.println("Welcome Mr. "+name);
    } 
}