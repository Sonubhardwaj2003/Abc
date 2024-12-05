// Widening (upcasting) is the storing of data of smaller datatype in larger datatype.i.e byte into short,s=b or byte and short into int ,i=b,s following Size and Compactability (main character).
// Narowing (downcasting) is, if we to store the larger datatyoe data in smaller datatype then narowing is done .
public class WideningNarowing {
    public static void main(String[] args) {
        byte b=12;     
        short s=5;
        int i=10;
        long l=10;
        float f=10;
        double d=10;
        char c=10;
        // boolean bl=true;

        s=b;          //Widening
        i=b; 
        l=b;
        f=b;
        d=b;
    
        System.out.println(s);
        System.out.println(i);
        System.out.println(l);
        System.out.println(f);
        System.out.println(d);
        
        b=(byte)s;        //Narowing
        System.out.println(b);
        
        b=(byte)c;
        System.out.println(b);
        
        i=(int)f;
        f=(float)d;
        //and as so on for all 
    }
}
