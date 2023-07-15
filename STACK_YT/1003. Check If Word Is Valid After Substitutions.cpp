//my first APPROACH TC=0(N^2)
class Solution {
public:
    bool isValid(string s) {
        int i=0;
        int n=s.size();
        while(i<n-2){
            string t=s.substr(i,3);
            //cout<<"original str=="<<s<<endl;
            //cout<<"substr =="<<t<<endl;
            if(t=="abc"){
              
                
                s.erase(i,3);
               // cout<<" after erase--"<<s<<" "<<endl;
                i=0;
            }
            else{
                i++;
            }
            n=s.size();
         
        }
        if(s.empty())return 1;
        return 0;
    }
};




//M2
TC=O(N^2);

class Solution {
public:
    bool isValid(string s) {
        //base case
        if(s.size()==0){
            return 1;
        }
        int fnd=s.find("abc");
        int n=s.size();
        if(fnd!=string::npos){
            string left=s.substr(0,fnd);
             string right=s.substr(fnd+3,n);
            return isValid(left+right);
        }
        return 0;
    }
};






//M3
class Solution {
public:
    bool isValid(string s) {
        //base case
        stack<char>st;
        int i=0;
        int n=s.size();
        while(i<n){
            if(s[i]=='a'||s[i]=='b'){
                st.push(s[i]);
                

            }
            else if(s[i]=='c'){
                if(st.empty()){
                    return 0;
                }
                else{
                    if(st.top()=='b'){
                         st.pop();
                         if(st.empty())return 0;
                         else{
                            if (st.top()=='a'){
                                st.pop();

                            }
                            else{
                                return 0;
                            }
                         }

                    }
                    else{
                        return 0;
                    }
                }
            }
            i++;
        }
        return st.empty()?1:0;
    }
};

