#include <bits/stdc++.h>

using namespace std;


int cnt=0;


void mcopy(vector<vector<char>> &v_prev, vector<vector<char>> &v_now, int n, int m)
{
    for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            v_prev[i][j]=v_now[i][j];
        }
   }
}

void check_alive(vector<vector<char>> &v_prev,vector<vector<char>> &v_now, int n, int m)
{
  for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
                if((i>0 and j>0) and (i<n-1 and j<m-1)){
                    if(v_prev[i-1][j-1]=='*') cnt++;
                    if(v_prev[i-1][j]=='*') cnt++;
                    if(v_prev[i-1][j+1]=='*') cnt++;
                    if(v_prev[i][j+1]=='*') cnt++;
                    if(v_prev[i+1][j+1]=='*') cnt++;
                    if(v_prev[i+1][j]=='*') cnt++;
                    if(v_prev[i+1][j-1]=='*') cnt++;
                    if(v_prev[i][j-1]=='*') cnt++;
            }

                else if(i==0 and (j!=0 and j!=m-1)){
                    if(v_prev[i][j-1]=='*') cnt++;
                    if(v_prev[i+1][j-1]=='*') cnt++;
                    if(v_prev[i+1][j]=='*') cnt++;
                    if(v_prev[i+1][j+1]=='*') cnt++;
                    if(v_prev[i][j+1]=='*') cnt++;
                }
                else if(j==0 and (i!=0 and i!=n-1)){
                    if(v_prev[i-1][j]=='*') cnt++;
                    if(v_prev[i-1][j+1]=='*') cnt++;
                    if(v_prev[i][j+1]=='*') cnt++;
                    if(v_prev[i+1][j+1]=='*') cnt++;
                    if(v_prev[i+1][j]=='*') cnt++;
                }
                else if(i==n-1 and (j!=0 and j!=m-1)){
                    if(v_prev[i][j-1]=='*') cnt++;
                    if(v_prev[i-1][j-1]=='*') cnt++;
                    if(v_prev[i-1][j]=='*') cnt++;
                    if(v_prev[i-1][j+1]=='*') cnt++;
                    if(v_prev[i][j+1]=='*') cnt++;
                }
                else if(j==m-1 and (i!=0 and i!=n-1)){
                    if(v_prev[i-1][j]=='*') cnt++;
                    if(v_prev[i-1][j-1]=='*') cnt++;
                    if(v_prev[i][j-1]=='*') cnt++;
                    if(v_prev[i+1][j-1]=='*') cnt++;
                    if(v_prev[i+1][j]=='*') cnt++;
                }

                else if(i==0 and j==0){
                    if(v_prev[i][j+1]=='*') cnt++;
                    if(v_prev[i+1][j+1]=='*') cnt++;
                    if(v_prev[i+1][j]=='*') cnt++;
                }
                else if(i==0 and j==m-1){
                    if(v_prev[i][j-1]=='*') cnt++;
                    if(v_prev[i+1][j-1]=='*') cnt++;
                    if(v_prev[i+1][j]=='*') cnt++;
                }
                else if(i==n-1 and j==0){
                    if(v_prev[i-1][j]=='*') cnt++;
                    if(v_prev[i-1][j+1]=='*') cnt++;
                    if(v_prev[i][j+1]=='*') cnt++;
                }
                else if(i==n-1 and j==m-1){
                    if(v_prev[i-1][j]=='*') cnt++;
                    if(v_prev[i-1][j-1]=='*') cnt++;
                    if(v_prev[i][j-1]=='*') cnt++;
                }


                if(cnt<2 or cnt>3)
                        v_now[i][j]='-';

                    else if(cnt==3)
                        v_now[i][j]='*';

                    cnt=0;
        }
    }
}


int main()
{
    int gen=1;

    int alv=0;

    int c=0;

    int m, n;
    int s;
    ifstream fin ("H:\\CodeBlocks\\GL.txt");
    fin>>s;
    n=s;
    fin>>s;
    m=s;
    vector<vector<char>> v_now(n, vector<char>(m, '-')); //изначальный, после предыдущий мир
    vector<vector<char>> v_prev(n, vector<char>(m));

    while(fin.eof()!=1){
        for(int i=2;i>0;i--){
            int a,b;
            fin>>a;
            fin>>b;
            v_now[a][b]='*';

        }
    }



    for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            cout<<v_now[i][j]<<" ";
        }
        cout<<endl;
   }
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v_now[i][j]=='*')
                alv++;
    }
   }
   cout<<"Generation: "<<gen<<". Alive cells: "<<alv;


   mcopy(v_prev, v_now, n, m);

   check_alive(v_prev, v_now, n, m);

   gen++;

   cout<<endl;

   alv=0;
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v_now[i][j]=='*')
                alv++;
    }
   }

   if(alv!=0){
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v_now[i][j]<<" ";
    }
        cout<<endl;
    }
    cout<<"Generation: "<<gen<<". Alive cells: "<<alv;
   }
   for(int i=0; i<n;i++){
    for(int j=0; j<m;j++){
        if(v_prev[i][j]==v_now[i][j]){
            c++;
        }
    }
   }



   while(c!=n*m and alv!=0){
    cout<<endl;
    mcopy(v_prev, v_now, n, m);
    check_alive(v_prev, v_now, n, m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v_now[i][j]<<" ";
    }
        cout<<endl;
   }
   gen++;
   alv=0;
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v_now[i][j]=='*')
                alv++;
    }
   }
    cout<<"Generation: "<<gen<<". Alive cells: "<<alv;


    c=0;

    for(int i=0; i<n;i++){
    for(int j=0; j<m;j++){
        if(v_prev[i][j]==v_now[i][j]){
            c++;
        }
    }
   }
   }
   if(c==n*m and alv!=0)
    cout<<endl<<"The world has stagnated. Game over:(";
   else
    cout<<endl<<"All cells are dead. Game over:(";


	return 0;
}
