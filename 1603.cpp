class ParkingSystem {
public:
    vector<int>v;
    ParkingSystem(int big, int medium, int small) {
       v.push_back(small);
       v.push_back(medium);
       v.push_back(big);
    }
    
    bool addCar(int carType) {
        if(carType==3){
            if(v[0]==0)return false;
            else{
                v[0]--;
                return true;
            }
        }
        else if(carType==2){
            if(v[1]==0)return false;
            else{
                v[1]--;
                return true;
            }
        }
        else
        {
            if(v[2]==0)return false;
            else{
                v[2]--;
                return true;
            }
        }
        
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
