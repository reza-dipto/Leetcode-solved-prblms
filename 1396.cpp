class UndergroundSystem {
public:
  unordered_map<int,pair<string,int>>checkmp;
    unordered_map<string,pair<int,int>>path;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        checkmp[id]={stationName,t};
    }
    
    void checkOut(int id, string stationName, int t) {
         auto checkin=checkmp[id];
         checkmp.erase(id);
         string pathname=checkin.first+"_"+stationName; 

         path[pathname].first+=t-checkin.second;

         path[pathname].second+=1;   

        }
    
    double getAverageTime(string startStation, string endStation) {
        string rasta=startStation+"_"+endStation;
        auto &route=path[rasta];
        return (double) route.first/route.second;
        
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
