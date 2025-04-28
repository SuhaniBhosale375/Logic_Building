import java.util.*;

class Prog45_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        MyArray obj = new MyArray();

        System.out.println("Enter the size of array :");
        int iSize = sobj.nextInt();

        float Per[] = new float[iSize];

        System.out.println("Enter the Percentage :");

        for(int i = 0; i < Per.length; i++)
        {
            Per[i] = sobj.nextFloat();
        }

        obj.Percentage(Per,iSize);


    }
}

class MyArray
{
    public void Percentage(float arr[], int iSize)
    {
        System.out.println("");
        for(int i = 0; i < arr.length; i++)
        {
            if(arr[i] < 35)
            {
                System.out.println(arr[i]+"  Fail");
            }
            if((arr[i] > 35) &&(arr[i] <= 50 ))
            {
                System.out.println(arr[i]+"  Pass Class");
            }
            if((arr[i] >= 50) &&(arr[i] <= 60))
            {
                System.out.println(arr[i]+"  Second class");
            }
            if((arr[i] >= 60) && (arr[i] <= 70))
            {
                System.out.println(arr[i]+"  First  class");
            }
            if(arr[i] >= 70)
            {
                System.out.println(arr[i]+"  First class with Distinction");
            }
        }
    }
}
