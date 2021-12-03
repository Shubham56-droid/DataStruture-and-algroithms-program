package com.company;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class AwtJava extends Frame implements ActionListener
{
//    Frame F;
    Label l1,l2,l3;
    TextField t1,t2,t3;
    Button b1,b2,b3,b4;


    AwtJava(String title)
    {
        super(title);
//        F = new Frame();
        this.setVisible(true);
        setSize(260,200);
        setBackground(Color.DARK_GRAY);
        setResizable(true);
        setLocation(600,200);



        l1 = new Label("Enter the number 1:");
        l2 = new Label("Enter the number 2:");
        l3 = new Label("Results :");

        b1 = new Button("Addition");
        b1.setForeground(Color.orange);
        b1.setBackground(Color.gray);
        b1.addActionListener(this);


        b2 = new Button("Subtract");
        b2.setForeground(Color.orange);
        b2.setBackground(Color.gray);
        b2.addActionListener(this);


        b3 = new Button("Multiply");
        b3.setForeground(Color.orange);
        b3.setBackground(Color.gray);
        b3.addActionListener(this);

        b4 = new Button("Division");
        b4.setForeground(Color.orange);
        b4.setBackground(Color.gray);
        b4.addActionListener(this);






        t1 = new TextField(10);
        t2 = new TextField(10);
        t3 = new TextField(10);

        Panel p1 = new Panel();
        p1.setBackground(Color.green);
        p1.add(l1);
        p1.add(t1);

        Panel p2 = new Panel();
        p2.setBackground(Color.green);
        p2.add(l2);
        p2.add(t2);

        Panel p3 = new Panel();
        p3.setBackground(Color.green);
        p3.add(l3);
        p3.add(t3);

        Panel p4 = new Panel();
        p4.setBackground(Color.cyan);
        GridLayout g = new GridLayout(2,2);
        p4.setLayout(g);
        p4.add(b1);
        p4.add(b2);
        p4.add(b3);
        p4.add(b4);


        FlowLayout f1 = new FlowLayout();
        this.setLayout(f1);
        add(p1);
        add(p2);
        add(p3);
        add(p4);



    }
    public static void main(String[] args)
    {
        AwtJava a = new AwtJava("Gui App");
    }

    @Override
    public void actionPerformed(ActionEvent e)
    {
        String s1 = t1.getText();
        String s2 = t2.getText();

        if(s1.equals("") || s2.equals(""))
        {
            javax.swing.JOptionPane.showMessageDialog(null,"Please fill all the field");
        }
        else
        {
            double d1 = Double.parseDouble(s1);
            double d2 = Double.parseDouble(s2);
            double r = 0.0;
//            Object obj = e.getSource();
//            if(obj == b1)
            /* Here we will be using different method  e.getActionCommand()*/

            String obj = e.getActionCommand();
            if(obj.equals("Addition"))
            {
                r = d1 + d2;
                t3.setText(String.valueOf(r));
            }
            else if(obj.equals("Subtract"))
            {
                r = d1 - d2;
                t3.setText(String.valueOf(r));
            }
            else if(obj.equals("Multiply"))
            {
                r = d1 * d2;
                t3.setText(String.valueOf(r));
            }
            else if(obj.equals("Division"))
            {
                r = d1 / d2;
                t3.setText(String.valueOf(r));
            }
            else
            {
                t3.setText("Invalid Entry");
            }


        }
    }


}
