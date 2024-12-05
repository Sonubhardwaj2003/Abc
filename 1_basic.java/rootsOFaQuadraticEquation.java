import java.util.*;
public class rootsOFaQuadraticEquation {
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc=new Scanner(System.in);
        float a,b,c;
        double D,r1,r2;

        System.out.println("Enter the value of a,b,c :");
        a=sc.nextFloat();
        b=sc.nextFloat();
        c=sc.nextFloat();

        D=((b*b)-(4*a*c));
        System.out.println("The value of descrimenent is :"+D);

        if(D>=0){
            System.out.println("Roots of equation are :");
            r1= ((-b) + Math.sqrt(D))/(2*a);
            r2= ((-b) - Math.sqrt(D))/(2*a);
            System.out.println("r1 :" + r1);
            System.out.println("r2 :" + r2);
        }
        else{
            System.out.println("Roots of equation not possible");
        }

    }
}
