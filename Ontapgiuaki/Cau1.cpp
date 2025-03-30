#include <iostream>
#include <vector>

using namespace std;

void findPairs(const vector<int>& a, int k){
    for(int i = 0; i < a.size(); i++){
        for(int j = i + 1; j < a.size(); j++){
            if(a[i] + a[j] == k){
                cout << a[i] << " " << a[j] << endl;
            }
        }
    }
}


int main(){
    int n, k;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;

    findPairs(a, k);

    return 0;
}
