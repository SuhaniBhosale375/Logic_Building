import java.util.*;

class Prog38_1
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String s = sobj.nextLine();

        Pattern obj = new Pattern();

        obj.Display(s);

    }
}
class Pattern
{
    public void Display(String str)
    {
        char Arr[] = str.toCharArray();
        
        for(int i = 1; i < Arr.length ; i++)
        {
            for(int j = 0; j < Arr.length; j++)
            {
                if((i > j))
                {
                    System.out.print(Arr[j]+"\t");
                }
                else
                {
                    System.out.print("#\t");
                }
            }
            System.out.println();
        }
        for(int i = Arr.length; i > 0 ; i--)
        {
            for(int j = 0; j < Arr.length; j++)
            {
                if(( i > j))
                {
                    System.out.print(Arr[j]+"\t");
                }
                else
                {
                    System.out.print("#\t");
                }
            }
            System.out.println();
        }
    }
}