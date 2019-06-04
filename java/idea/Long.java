package idea;

import java.util.Arrays;

public class Long {
	public static void main(String[] args){
		int[] x = {5,4,1,2,3};
		ce(x);
		System.out.println(ce(x));
	}

public static int ce(int[] x){
	int longest = 0;
	int n = 0;
	int len = x.length;
	int[] dp = new int[len];
	Arrays.fill(dp, 1);
	for(int i = 1;i<x.length;i++){
		for(int j = 0;j<i;j++){
			if(x[j]<x[i]){
				dp[i] = Integer.max(dp[j]+1, dp[i]);
			}	
		}
	}
	Arrays.sort(dp);
	return dp[dp.length-1];
}
}
