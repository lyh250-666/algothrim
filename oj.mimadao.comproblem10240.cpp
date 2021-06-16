#include<iostream>
#include<vector>
using namespace std;
typedef location {
    int low;
    int high;
}location;

int main() {
    int n;
    cin >> n;
    vector <location> A;
    location temp;
    for(int i = 0; i < n; i++) {
        cin >> temp.low >> temp.high;
        A.push_back(temp);
    }
}
