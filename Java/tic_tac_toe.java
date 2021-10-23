import java.util.*;
class tic_tac_to
{
    public static void main(String args[])
    {
        Scanner I=new Scanner(System.in);
        String a[][]= new String[3][3];
        String nm[]=new String [2];
        String sym[]={"O","X"};
        int n,i,j,k;
      for(i=0;i<2;i++)
           {
               System.out.println("PLAYER "+ (i+1)+":");
               nm[i]=I.nextLine().toUpperCase();
            }
        System.out.println("WELCOME TO THE GAME OF TIC-TAC-TO\nYOUR INPUT OPTIONS ARE AS FOLLOWS:\n0)TOP-LEFT \t1)TOP-MID\t2)TOP-RIGHT\n3)MID-LEFT\t4)CENTRE  \t5)MID-RIGHT\n6)DOWN-LEFT\t7)DOWN-MID\t8)DOWN-RIGHT\nNOW ENTER THE RELEVENT POSITION NUMBERS ALTERNATIVELY,FIRST TO START IS O AND SECOND GETS X\n");
      for(i=0;i<3;i++)
            for(j=0;j<3;j++)
                a[i][j]=" ";
       for(k=0;k<9;k++)
       {
         n=I.nextInt();
        System.out.println(nm[k%2]+"'s MOVE:");
        if(n>8||n<0)
        {
            System.out.println("INVALID INPUT\nRETRY");
            k=k-1;
            continue;
        }
        else 
            if(a[n/3][n%3]==" ")
              a[n/3][n%3]=sym[k%2];
             else
             { 
                 System.out.println(nm[k%2]+" THIS SPACE IS ALREADY OCCUPIED KINDLY CHOOSE ANOTHER ONE"); 
                 k=k-1;
                 continue;
             }
          for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
              System.out.print(a[i][j]+"\t");
            System.out.println();
        } 
        for(i=0;i<3;i++)
          if((a[i][0]==(a[i][1])&&a[i][0]==a[i][2]&&a[i][0]==sym[k%2])||(a[0][i]==a[1][i]&&a[0][i]==a[2][i]&&a[0][i]==sym[k%2])||a[0][0]==a[1][1]&&a[0][0]==a[2][2]&&(a[1][1]==sym[k%2])||a[0][2]==a[1][1]&&a[0][2]==a[2][0]&&(a[1][1]==sym[k%2]))
                {
                      System.out.println(nm[k%2]+" WINS!!!!!!!!!!!!!!!!!!!");
                      break;
                }
        if(i<3)
         break;
      }
      if(i==3)
       System.out.println("THE GAME IS TIED");
   }
}
