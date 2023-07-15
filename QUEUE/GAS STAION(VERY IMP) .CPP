class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

         int balance=0;
        int deficit=0;
        int start=0;
        int n=gas.size();
        for(int i=0;i<n;i++){
            balance+=gas[i]-cost[i];
            if(balance<0){
                deficit+=balance;
                start=i+1;
                balance=0;
            }
        }
        return (balance+deficit)>=0?start:-1;




        // int ptrl=0;
        // int n=gas.size();
        // int j=-1;
        // for(int i=0;i<n;i++){
        //     ptrl=gas[i];
        //     if(gas[i]>=cost[i]){
        //         //movement possible
        //         ptrl-=cost[i];
        //           for( j=i+1 ;j<i+n;j++){
                      
        //               ptrl+=gas[j%n];
        //               if(ptrl<cost[j%n]){
        //                   break;
        //               }
        //               else{
        //                    ptrl-=cost[j%n];
        //               }
                     

        //         }
        //         if(i==j%n){
        //             return i;
        //         }
        //     }
           
        // }
        //  return -1;
          
    }
};
