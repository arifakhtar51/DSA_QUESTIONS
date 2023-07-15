class Solution {
public:
void rev(stack<string>&st,string &ans){
    //basecase
    if(st.empty()){
        return ;
    }
    string a=st.top();
    st.pop();
    rev(st,ans);
    ans+=a;

}
    string simplifyPath(string path) {
        stack<string>st;
        string ans;
        int i=0;
        while(i<path.size())
        {
            int start=i,end=i+1;
            while( end< path.size() && path[end]!='/' ){
                ++end;
            }
            string s=path.substr(start,end-start);
            i=end;
            if(s=="/" || s=="/."){
                continue;
            }
            if(s!="/.."){
                st.push(s);
            }
            else  if(!st.empty()){
               
                st.pop();
            }
        }
  
        ans=st.empty()?"/":"";
              rev(st,ans);
        
        return ans;
    }
};
