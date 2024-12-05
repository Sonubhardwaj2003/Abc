// Java is based on Unicode >>support all the languages i.e. english ,japnes,arabic,etc.
// ASCII is subset of unicode i.e support only english languages i.e. C++
public class otherlanguagecodes 
{
    public static void main(String[] args) 
    {
        for(char c=0x0900;c<=0x097F;c++)
        {
            System.out.print(c+" ");
        }
    }
}
