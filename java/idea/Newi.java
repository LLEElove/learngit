package idea;

public class Newi {
	public static void main(String[] args){
		int[] x = {5,4,1,2,3};
		System.out.println(solution(x));
	}
	public static int solution(int[] x){
		if(x.length == 0 || x.length == 1)
			return 0;
		int[] dp = new int[x.length];
		dp[0] = x[0];
		int len = 0;
		for(int i = 1;i<x.length;i++){
			if(x[i]>dp[len]){
				dp[++len] = x[i];
			}
			else{
				int y = search(dp,len,x[i]);
				dp[y] = x[i];
			}
		}
		return len+1;
	}
	public static int search(int[] a,int len,int c){
		int low =0;
		int height = len;
		while(low<=height){
			int mid = (height+low)/2;
			if(a[mid] >= c)
				height = mid-1;
			else
				low = mid+1;
		}
		return low;
	}
}
