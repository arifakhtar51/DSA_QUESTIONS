class Solution{
  public:	

	int distinctSubsequences(string s)
	{
	    // Your code goes here
	    int mod=1e9+7;
	    int n = s.size();
        int dp[n+1] = {0};
        
        dp[0] = 1;
        map<int, int>mp;
        
        for(int i=1; i<=n; i++)
        {
            dp[i] = (dp[i-1]*2)%mod;
            
            if(mp[s[i-1]]) dp[i] = (dp[i]-dp[mp[s[i-1]]-1]+mod)%mod;
            mp[s[i-1]] = i;
        }
        
        return dp[n];
	}
};


or

	    int n=s.size();
        long long mod=1e9+7;
        long long arr[26]={0},pre=1,cur=1;
        for(int i=0;i<n;i++){
            cur=(pre*2)%mod;
            cur = (cur - arr[s[i] - 'a'] + mod) % mod;
            arr[s[i]-'a']=pre;
            pre=cur;
        }
        return cur;
