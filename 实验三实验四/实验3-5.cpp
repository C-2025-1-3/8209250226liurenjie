#include <iostream>
using namespace std;
int peaches(int day) {
    if (day == 10) return 1;               
    return 2 * (peaches(day + 1) + 1);     
}

int main() {
    cout << peaches(1) << endl;  
    return 0;
}