

vector<long long> printFirstNegativeInteger(long long int arr[],
 long long int N, long long int K) {
     
     queue<long long > q;
     vector<long long int> ans;
     if(K>N)return ans;
     long long int n=0;
     long long int i=K;
     while(n<K){
         q.push(arr[n]);
         n++;
     }
     while(i<=N){
         
         while(true){
             if(q.empty()){
                 ans.push_back(0);
                 break;
             }
             else if(q.front()<0){
                 ans.push_back(q.front());
                if(q.size()==K){
                    q.pop();
                }
                break;
             }
             else
             q.pop();
         }
         q.push(arr[i]);
         i++;
             
         
     }
     return ans;
 
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
