/*

    H   *   *   *   *
    H   e   *   *   *
    H   e   l   *   *
    H   e   l   l   *
 */

import java.util.*;

class Prog38_5
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

        for(int i = 0; i < Arr.length ; i++)
        {
            for(int j = 0; j < Arr.length; j++)
            {
                if((i >= j))
                {
                    System.out.print(Arr[j]+"\t");
                }
                else
                {
                    System.out.print("*\t");
                }
            }
            System.out.println();
        }
    }
}