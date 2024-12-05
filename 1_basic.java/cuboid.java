import java.util.*;
public class cuboid {
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc=new Scanner(System.in);
        float l,b,h;
        double vol,area;

        System.out.println("Enter the value of l,b,h :");
        l=sc.nextFloat();
        b=sc.nextFloat();
        h=sc.nextFloat();

        vol=l*b*h;
        System.out.println("Volume of Cuboid is :" + vol);

        area=2*((l*b)+(b*h)+(h*l));
        System.out.println("Area of Cuboid is :" + area);
    }
}
