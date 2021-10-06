/*
Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order.

Example:
Input:
Queue: [1,2,3,4,5], k=3

Output:
Queue:[3,2,1,4,5]


*/

import java.util.*;

public class ReverseQueueElements {

    public static Queue<Integer> modifyQueue(Queue<Integer> q, int k) {
        if(q.size() ==0 || q.size()<k) return q;
        int elements = k;
        Stack<Integer> st = new Stack<Integer>();
        while(elements!=0){
            st.push(q.peek());
            q.remove();
            elements--;
        }

        while(!st.isEmpty()){
            q.add(st.peek());
            st.pop();
        }

        for(int i=0; i<q.size()-k; i++){
            int e = q.peek();
            q.remove();
            q.add(e);
        }

        return q;
    }

    public static void main(String[] args) {
        Queue<Integer> q = new LinkedList<>();
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the size of the queue");
        int x = scanner.nextInt();
        System.out.println("Please enter "+x+ " elements");
        while(x!=0){
            q.add(scanner.nextInt());
            x--;
        }
        System.out.println("Please enter number of elements to be reversed");
        int k = scanner.nextInt();
        if(k<0 || k>q.size()){
            System.out.println("Please enter valid element to be reversed");
        }
        modifyQueue(q, k);

        System.out.println(q);

    }
}
