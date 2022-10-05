#include<iostream>
using namespace std;
int getSum(int);
int main(){
    int n, sum;
    do{
        cout << "Enter the number of input: ";
        cin >> n;
        if(n != -1){
            sum = getSum(n);
            cout << "The sum is " << sum << endl;
            break;
        }
    }while(n != -1);
    return 0;
}
int getSum(int n){
    int number;
    int max = -1, min = 10000000, sum =0;
    cout << "Enter " << n << " elements: \n";
    for(int i=0; i < n; i++){
        cin >> number;
        sum += number;
        if(max < number){
            max = number;
        }
        if(min > number){
            min = number;
        }
    }
sum = sum - max - min;
return sum;  
}


