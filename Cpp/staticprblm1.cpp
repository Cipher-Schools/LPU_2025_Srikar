// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;
class Participant{
    public:
        string name;
        double weight;
        double workoutDuration;
};
int main(){
    int n;
    cin>>n;
    Participant p[n];
    for(int i=0;i<n;i++){
        cin>>p[i].name>>p[i].weight>>p[i].workoutDuration;
    }
    double weightLoss=0;
    for(int i=0;i<n;i++){
        weightLoss+=p[i].workoutDuration;
    }
    cout<<fixed<<setprecision(2)<<weightLoss/60.0;
}