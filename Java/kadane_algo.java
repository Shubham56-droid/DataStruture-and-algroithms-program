import java.util.*;
public class kadane_algo {
	public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	int t= sc.nextInt();
	while(t>0) {
		int n=sc.nextInt();
		int []arr=new int[n];
		for(int i=0;i<n;i++) {
			arr[i]=sc.nextInt();
		}
		int res=arr[0],cm=arr[0];
        for(int i=1;i<n;i++){
            if(cm>=0){
                cm=cm+arr[i];
            }
            else{
                cm=arr[i];
            }
            if(cm>res){
                res=cm;
            }
        }
        System.out.println(res);
		t--;
	}
	}
}
