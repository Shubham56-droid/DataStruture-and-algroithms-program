#include<bits/stdc++.h>
using namespace std;

// requirement is to search for a given number in the given vector
bool isPresent(vector<int>&v,int x) {
    int n=v.size();   
    int start=0;
    int end=n-1;

    while (start<=end) {
        int mid = start+ (end-start)/2;

        if (v[mid]==x) {
            return true;
        }
        else if (v[mid]>x) {
            end=mid-1;
        }
        else {
            start=mid+1;
        }
    }
    return false;
}

int main() {

        vector<int> v={9,3,2,4,6,3,1,5,3,4};
        int x=6;
        // we will serach for this x in the vector

        // for binary serach, the vector should be sorted!!

        sort(v.begin(),v.end());
        if (isPresent(v,x)) {
            cout <<"The number is present!!"<<endl;
        }
        else {
            cout<<"The number is not present!!"<<endl;
        }

}
