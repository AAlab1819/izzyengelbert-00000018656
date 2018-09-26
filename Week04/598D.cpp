#include <bits/stdc++.h>
using namespace std;
int cells[1000][1000] = {0};
char cellsP[1000][1000];
int output = 0;
int area = 0;
void checkPictures(int x, int y,  int n, int m){
    if(x < 0 || x >= n || y < 0 || y >= m){
        return;
    }
    if(cells[x][y] != 0){
        return;
    }
    if(cellsP[x][y] == '*'){
        ++output;
        return;
    }
    cells[x][y] = area;
    checkPictures(x, y-1, n, m);
    checkPictures(x, y+1, n, m);
    checkPictures(x-1, y, n, m);
    checkPictures(x+1, y, n, m);
    return;
}
int main(){

    int n,m,k;
    cin>>n>>m>>k;
    int outputs[1000000] = {0};

    for(int i=0; i<n; ++i){
        cin>>cellsP[i];
    }
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            if(cellsP[i][j] == '.' && cells[i][j] == 0){
                ++area;
                output = 0;
                checkPictures(i,j, n, m);
                outputs[area] = output;
            }
        }
    }
    for(int i=0; i < k; ++i){
        int x,y;
        cin>>x>>y;
        cout<<outputs[cells[x-1][y-1]]<<endl;
    }

    return 0;
}



