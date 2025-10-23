// You are using GCC
int sumOfEvenOdd(int start,int end){
    if(start%2!=0){
        start++;
    }
    if(start>end){
        return 0;
    }
    return start+sumOfEvenOdd(start+2,end);
}