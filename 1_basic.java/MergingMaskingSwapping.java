//Merging of two values is done using bitwise OR (|) operator
//Maskimg of two values is done using bitwise AND (&) operator
//Swapping of two values is done using bitwise XOR (^) operator

// public class MergingMaskingSwapping {
//     public static void main(String[] args) {

//         int a=10,b=15;

//         a=a^b;   //swapping
//         b=a^b;
//         a=a^b;

//         System.out.println(a+" "+b);
//     }
// }



public class MergingMaskingSwapping {
    public static void main(String[] args) {

        byte a=9,b=12;
        byte c;

        c=(byte)(a<<4);
        c=(byte)(c|b);
        System.out.println(c);
        System.out.println((c&0b11110000)>>4);
        System.out.println((c&0b00001111));
    }
}