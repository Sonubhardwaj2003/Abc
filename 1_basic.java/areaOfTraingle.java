// import java.util.*;
// public class areaOfTraingle 
// {
//     public static void main(String[] args)
//     {
//         @SuppressWarnings("resource")
//         Scanner s=new Scanner(System.in);
//         float b,h;
//         float area;
//         System.out.println("Enter the value of base and height");
//         b=s.nextFloat();
//         h=s.nextFloat();
//         area=(b*h)/2;
//         // area=(b*h)*0.5f;
//         // area=1f/2f*(b*h);
//         System.out.println("Area of Traingle is :"+area);
//     }
// }




// using herons formula 
import java.util.*;
public class areaOfTraingle 
{
    public static void main(String[] args)
    {
        @SuppressWarnings("resource")
        Scanner s=new Scanner(System.in);
        float a,b,c,x;
        double area;

        System.out.println("Enter the value of a,b,c :");

        a=s.nextFloat();
        b=s.nextFloat();
        c=s.nextFloat();

        System.out.println( "The value of side is :");
        x=(a+b+c)/2;
        System.out.println(x);

        area=Math.sqrt(x*(x-a)*(x-b)*(x-c));
        // sqrt function only use double datatype ,so we use area variable in double datatype
        System.out.println("Area of Traingle is :"+area);
    }
}