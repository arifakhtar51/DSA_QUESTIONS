

void solve(queue<int> &q,int cnt,int k){
    //base case

    if(cnt==k){
        return ;
    }
    int a=q.front();
    q.pop();
    solve(q,cnt+1,k);
    q.push(a);
    //dont need to return here
    
}
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    if(k>q.size())return q;
    solve(q,0,k);
    int n=q.size()-k;
    while(n>=1){
        int a=q.front();
        q.pop();
        q.push(a);
        n--;
    }
    return q;
}
