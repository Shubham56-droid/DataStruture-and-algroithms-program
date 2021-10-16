#include <iostream>
using namespace std;
int main() {
 int t,n,k,instance_max,max=0;
    cin>>t;
    while(t--){
        cin>>n>>k;
        max=0;
        for(int i=1;i<=k;i++){
            instance_max = n%i;
            if(instance_max > max){
                max = instance_max;
            }
        }
        cout<<max<<endl;
    }

	return 0;
}
