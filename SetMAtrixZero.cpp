#include <bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>> &mat){
    int i,j,col=1;
    for(i=0;i<mat.size();i++){
        if(mat[i][0]==0) col=0;
        for(j=1;j<mat[0].size();j++){
            if(mat[i][j]==0) {
                mat[i][0]=0;
                mat[0][j]=0;
            }
        }
    }
    for(i=mat.size()-1;i>=0;i--){
        for(j=mat[0].size()-1;j>=1;j--){
            if(mat[i][0]==0 or mat[0][j]==0){
                mat[i][j]=0;
            }
        }
        if(col==0) mat[i][0]=0;
    }
}

int main() {
  vector < vector < int >> arr;
  arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
  setZeroes(arr);
  cout<<"The Final Matrix is "<<endl;
  for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }
}