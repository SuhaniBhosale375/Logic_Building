import java.util.*;

class Prog36_1
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
        for(int i = Row; i > 0; i--)
        {
            for(int j = Col; j > 0; j--)
            {
                System.out.print(j+"\t");
            }
            System.out.println();
        }
    }
}