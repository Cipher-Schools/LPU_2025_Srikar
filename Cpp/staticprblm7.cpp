// You are using GCC
class HealthProfile {
    //type your code here...
    public:
        string name;
        int age;
        double height;
        double weight;
        void displayProfile(HealthProfile healthProfile){
            double BMI=weight/(height*height);
            cout<<"BMI: "<<fixed<<setprecision(2)<<BMI<<endl;
        }
};