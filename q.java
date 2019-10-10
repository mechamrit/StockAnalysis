import java.util.Scanner;
class q
{
public static void main(String s[])
{
int i,j,k,l;
Scanner sc= newScanner(System.in)
for(i=1;i<=4;i++)
{
for(j=3;j>=i;j--)
{
System.out.print(" ");
}
for(k=1;k<=(2*i-1);k++)
{
System.out.print("**");
}
System.out.println();
}
}}
