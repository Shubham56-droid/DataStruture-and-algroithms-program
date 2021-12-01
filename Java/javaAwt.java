package com.company;
import javax.swing.border.Border;
import java.awt.*;

public class GuiApp
{
    Frame f;
    Label l1,l2,l3;
    TextField t1,t2,t3;
    Button b1,b2;

    public GuiApp()
    {
        /*
         * here i am defining everything
         */
        f = new Frame("Gui App");
        f.setVisible(true);
        f.setSize(260,450);
        f.setResizable(true);
        f.setLocation(600,250);

        l1 = new Label("Enter 1 number");
        l1.setBounds(20,50,90,25);
        l1.setBackground(Color.pink);
        t1 = new TextField(10);
        t1.setBounds(150,50,90,25);
        l2 = new Label("Enter 2 number");
        l2.setBounds(20,100,90,25);
        l2.setBackground(Color.pink);
        t2 = new TextField(10);
        t2.setBounds(150,100,90,25);
        l3 = new Label("Enter 3 number");
        l3.setBounds(20,150,90,25);
        l3.setBackground(Color.pink);
        t3 = new TextField(10);
        t3.setBounds(150,150,90,25);
        b1 = new Button("Add");
        b1.setBounds(20,200,90,25);
        b1.setBackground(Color.orange);
        b2 = new Button("Multiply");
        b2.setBounds(150,200,90,25);
        b2.setBackground(Color.orange);

        /*
        * Now I am going to set layout for
        * visibility in to the frame
        * flow layout - automatic approach
        */

        f.setLayout(null);
        f.add(l1);
        f.add(t1);
        f.add(l2);
        f.add(t2);
        f.add(l3);
        f.add(t3);
        f.add(b1);
        f.add(b2);
        f.setBackground(Color.DARK_GRAY);

    }
    public static void main(String[] args)
    {
        GuiApp G = new GuiApp();
    }
}
