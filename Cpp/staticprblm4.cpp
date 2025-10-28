// You are using GCC
int findMin(int i1, int i2, int i3){
    if(i1<=i2 && i1<=i3){
        return i1;
    }else if(i2<=i1 && i2<=i3){
        return i2;
    }else{
        return i3;
    }
}
double findMin(double i1, double i2, double i3){
    if(i1<=i2 && i1<=i3){
        return i1;
    }else if(i2<=i1 && i2<=i3){
        return i2;
    }else{
        return i3;
    }
}