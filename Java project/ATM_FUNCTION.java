import java.util.*;
class A
{
	private static float money = 1000;
	private float password = 123;


	public 
	void amount()
	{
		int a;
		System.out.print("Enter your password:-");
		Scanner obj=new Scanner(System.in);
		a=obj.nextInt();
		if(a!=password)
		{
			System.out.println("Envalid password.......");
		}
		else
		{
			System.out.println("Available money is:- "+money);
		}
	}
	public
	void Diposite()
	{
		int a, b;
		System.out.print("Enter your password:-");
		Scanner obj=new Scanner(System.in);
		a=obj.nextInt();
		if(a!=password)
		{
			System.out.println("Envalid password.......");
		}
		else
		{
			System.out.print("Enter the money for Addition:- ");
			b=obj.nextInt();
			money+=b;
			System.out.println("Available money is:- "+money);
		}
	}
	public
	void withdraw()
	{
		int a, b;
		System.out.print("Enter your password:-");
		Scanner obj=new Scanner(System.in);
		a=obj.nextInt();
		if(a!=password)
		{
			System.out.println("Envalid password.......");
		}
		else
		{
			System.out.print("Enter the money for Withdraw:- ");
			b=obj.nextInt();
			money-=b;
			System.out.println("Available money is:- "+money);
		}
	}	
}
class test 
{
	public static void main(String args[])
	{
		int val, a;
		System.out.println("1> check amount");
		System.out.println("2> Diposite amount");
		System.out.println("3> withdraw amount");
		System.out.println("4> Exit:- ");
		do{
		
		System.out.println("Enter your choice:- ");
		Scanner j=new Scanner(System.in);
		val=j.nextInt();
		A n=new A();
		switch(val){
		case 1:
		n.amount(); break;
		case 2:
		n.Diposite(); break;
		case 3:
		n.withdraw(); break;
		default: System.out.println("Envalid.....");
		}
		}while(val!=4);
	}
}
