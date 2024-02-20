import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    static int n1, n2;
	static int[] A;
	static int[] B;
	
	static boolean same(int n) {
		for (int f = 0; f < n2; f++) {
	        if (B[f] != A[n + f]) 
	        	return false;
	    }
		return true;
	}
	
	static boolean is_subseq() {
		for (int i = 0; i < n1 - n2 + 1; i++) {
	         if (same(i)) 
	        	 return true;
	    }
	    return false;
	}
    
    public static void main(String[] args) throws Exception{
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		
		n1 = Integer.parseInt(st.nextToken());
		n2 = Integer.parseInt(st.nextToken());
		
		A = new int[n1];
		B = new int[n2];
		st = new StringTokenizer(br.readLine());
		for (int i=0; i<n1; i++) {
			A[i] = Integer.parseInt(st.nextToken());
		}
		
		st = new StringTokenizer(br.readLine());
		for (int i=0; i<n2; i++) {
			B[i] = Integer.parseInt(st.nextToken());
		}
		
		if (is_subseq())
			System.out.println("Yes");
	    else 
	    	System.out.println("No");
	}
}