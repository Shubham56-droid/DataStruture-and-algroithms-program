import java.util.Scanner;

public class EvenAfterOddLL {
	
	public static Node<Integer> takeInput()
	{
		Node<Integer>head=null,tail=null;
		Scanner s=new Scanner(System.in);
		int data=s.nextInt();
		
		while(data!=-1)
		{
			Node<Integer>node=new Node<Integer>(data);
			if(head==null)
			{
				head=node;
				tail=node;
			}
			else
			{
//				Node<Integer>temp=head;
//				while(temp.next!=null)
//				{
//					temp=temp.next;
//				}
//				temp.next=node;
				
				tail.next=node;
				tail=tail.next;
				
			}
			data=s.nextInt();
		}
		return head;
	}
	
	public static Node<Integer> evenAfterOdd(Node<Integer> head) {

		Node<Integer>eh=null;
		Node<Integer>et=null;
		Node<Integer>oh=null;
		Node<Integer>ot=null;
		
		while(head!=null)
		{
			if(head.data%2!=0)  //odd
			{
				if(oh==null)
				{
					oh=head;
					ot=oh;
				}
				else
				{
					ot.next=head;
					ot=ot.next;
				}
			}
			else
			{
				if(eh==null)
				{
					eh=head;
					et=eh;
				}
				else
				{
					et.next=head;
					et=et.next;
				}
			}
			head=head.next;
		}
		
		 if(ot==null)
	     {
	    	 return eh;
	     }
        if(eh==null)
        {
            return oh;
        }
		
		ot.next=eh;
		et.next=null;
		return oh;
		
	}
	
	public static void print(Node<Integer>head)
	{
		Node<Integer>temp=head;
		while(temp!=null)
		{
			System.out.print(temp.data+" ");
			temp=temp.next;
		}
	}
	public static void main(String[] args) {
		Node<Integer>head=takeInput();
		Node<Integer>ans=evenAfterOdd(head);
		print(ans);
	}

}
