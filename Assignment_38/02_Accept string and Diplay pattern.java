/*
    H   e   l   l   o
    H   e   l   l
    H   e   l
    H   e
    H
 */

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
        
        for(int i = str.length(); i >= 0 ; i--)
        {
            for(int j = 0; j < str.length(); j++)
            {
                if(( i > j))
                {
                    System.out.print(Arr[j]+"\t");
                }
            }
            System.out.println();
        }
    }
}