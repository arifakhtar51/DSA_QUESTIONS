class Solution {
public:
class Car{
    public:
    int pos;
    int speed;
    //constructor

    Car(int p,int s) {
         this->pos=p;/*THIS IS ALSO POSSIBLE  Car(int pos,int speed) : pos(pos),speed(speed) {};THIS IS ALSO POSSIBLE*/
         this->speed=s;
    }
};
static bool my_comp(Car &a,Car&b){
    return a.pos<b.pos;
}
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<Car> cars;
        for(int i=0;i<position.size();i++){
            Car c(position[i],speed[i]);
            cars.push_back(c);
        }
        sort(cars.begin(),cars.end(),my_comp);

        stack<float> st;

        for(auto car : cars){
            //t=d/s
            float time=(target-car.pos)/(float)car.speed;
            while(!st.empty() && time>=st.top()){
                st.pop();
            }
            st.push(time);

        }

      return st.size();
    }
};
