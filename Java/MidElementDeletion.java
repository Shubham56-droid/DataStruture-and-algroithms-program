import java.io.*;
import java.util.*;

public class GFG {

	static void deleteMid(Stack<Character> st,
							int n, int curr)
	{
		
		if (st.empty() || curr == n)
			return;
		
		char x = st.pop();

		deleteMid(st, n, curr+1);

		if (curr != n/2)
			st.push(x);
	}

	public static void main(String args[])
	{
		Stack<Character> st =
				new Stack<Character>();

		st.push('1');
		st.push('2');
		st.push('3');
		st.push('4');
		st.push('5');
		st.push('6');
		st.push('7');
	
		deleteMid(st, st.size(), 0);

		while (!st.empty())
		{
			char p=st.pop();
			System.out.print(p + " ");
		}
	}
}
