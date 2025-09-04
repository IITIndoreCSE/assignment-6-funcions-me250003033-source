#include <iostream>
#include <vector>
using namespace std;

vector<long long> productExceptIndex(const vector<int>& arr) {
    int size = arr.size();
    vector<long long> output(size, 1);
    int prefix , suffix,j;
    for (int i=0;i<size;i++){
        prefix=1;
        suffix=1;
        for (int j=0;j<i;j++)
            prefix*=arr[j];
        for (int j=i+1;j<size;j++)
            suffix*=arr[j];
        output[i]=prefix*suffix;
    // TODO: complete the function as per instructions
    
}return output;
}
int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) cin >> arr[i];

    vector<long long> res = productExceptIndex(arr);
    for(auto v : res)
        cout << v << " ";
    cout << "\n";

    return 0;
}

