class Solution {
public:
class Car{
    public:
    int pos;
    int speed;
    //constructor

    Car(int pos,int speed) : pos(pos),speed(speed) {};
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
        
      return 0;
    }
};








