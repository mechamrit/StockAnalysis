
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class Swing1 implements ActionListener
{
JFrame jf;
JLabel jl,j2,j3;
JTextField jtg,jth;
JButton jb1;

Swing1()
{
jf=new JFrame("DEMO");


jf.setSize(500,500);
jf.setVisible(true);
jf.setLayout(null);
jb1=new JButton("login");



jl=new JLabel("LOGIN");
jl.setBounds(40,50,120,80);


j2=new JLabel("username");
j2.setBounds(20,100,100,50);
jtg=new JTextField();
j3=new JLabel("password");
j3.setBounds(20,200,100,50);
jth=new JTextField();

jtg.setBounds(80,110,100,50);
jth.setBounds(80,210,100,50);
jb1.setBounds(80,310,100,50);
jf.add(jl);
jf.add(j2);
jf.add(j3);

jf.add(jtg);
jf.add(jth);
jf.add(jb1);
jb1.addActionListener(this);
}
public void actionPerformed(ActionEvent ac)
{
if(ac.getSource()==jb1)
{

String username=jtg.getText();
String password=jth.getText();

if(username.equals("abc"))
{
if(password.equals("pqr"))
{
JOptionPane.showMessageDialog(null,"welcome");
}}
}
}
else
{
JOptionPane.showMessageDialog(null,"invalid details");
}}
}}}
public static void main(String args[])
{
new Swing1();
}}
