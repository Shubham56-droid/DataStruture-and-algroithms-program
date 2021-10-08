
#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> vec[], int parent, int child){
   vec[parent].push_back(child);
   vec[child].push_back(parent);
}
void recurred(int temp, vector<int> vec[], vector<bool> &check){
   check[temp] = true;
   int size = vec[temp].size();
   for(int i = 0; i < size; i++){
      if (check[vec[temp][i]] == false){
         recurred(vec[temp][i], vec, check);
      }
   }
}
int Trees_Forest(vector<int> vec[], int vertice){
   int count = 0;
   vector<bool> check(vertice, false);
   for(int i = 0; i < vertice; i++){
      if(check[i] == false){
         recurred(i, vec, check);
         count++;
      }
   }
   return count;
}
int main(){
   int vertice = 9;
   vector<int> vec[vertice];
   insert(vec, 1, 3);
   insert(vec, 2, 8);
   insert(vec, 2, 6);
   insert(vec, 3, 5);
   insert(vec, 3, 7);
   insert(vec, 4, 8);
   cout<<"Total number of trees in the forest: "<<Trees_Forest(vec, vertice);
   return 0;
}
