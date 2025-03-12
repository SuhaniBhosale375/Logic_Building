import java.util.*;

class Prog37_5
{
    public static void main(String arr[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows :");
        int iRow = sobj.nextInt();

        System.out.println("Enter number of colomns:");
        int iCol = sobj.nextInt();

        Pattern obj = new Pattern();

        obj.Display(iRow,iCol);
    }
}

class Pattern
{
    public void Display(int Row,int Col)
    {
        for(int i = 1; i <= Row; i++)
        {
            for(int j = 1; j <= Col; j++)
            {
                System.out.print(i+"\t");
            }
            System.out.println();
        }
    }
}