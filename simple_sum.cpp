#include<iostream>

using namespace std;

void sum(int x, int y){
    int total = x+y;
    cout << total;
}
int main(){
    int x, y;
    cin >> x >> y;
    sum(x, y);
}