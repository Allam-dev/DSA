#include<iostream>

using namespace std;

double pow(double number,int power);
// o(log(n))
int main(){

    cout << pow(5,2) << endl;

    return 0;
}

double pow(double number,int power){
    if(power == 1){
        return number;
    }else{
        double result = pow(number,power/2);
        if(power%2 == 0){
            return result*result;
        }else{
            return result *result*number;
        }
    }
}