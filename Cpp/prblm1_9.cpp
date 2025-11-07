#include <iostream>
#include <string.h>
using namespace std;
int count_words(string line){
    char* str=&line[0];
    int count=0;
    char *token=strtok(str," \t\n");
    while(token!=NULL){
        count++;
        token=strtok(NULL," \t\n");
    }
    return count;
}
int main(){
    string line;
    getline(cin,line);
    cout<<count_words(line)<<endl;
}