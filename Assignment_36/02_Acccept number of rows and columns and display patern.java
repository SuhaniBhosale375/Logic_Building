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
        
        for(int i = 1; i <= Row; i++)
        {
            char Cch = 'A',Sch = 'a';
            for(int j = 1; j <= Col; j++,Cch++,Sch++)
            {
               if(i % 2 == 0)
               {
                    System.out.print(Sch+"\t");
               }
               else
               {
                    System.out.print(Cch+"\t");
               }
            }
            System.out.println();
        }
    }
}