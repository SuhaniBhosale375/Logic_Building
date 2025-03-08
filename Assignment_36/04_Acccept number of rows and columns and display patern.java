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
        int iCnt = 1;
        for(int i = 1; i <= Row; i++)
        {
            for(int j = 1; j <= Col; j++,iCnt++)
            {
                System.out.print(iCnt+"\t");
            }
            System.out.println();
        }
    }
}