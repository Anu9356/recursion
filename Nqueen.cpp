class Solution {
public:
      bool issafe(int row,int col,vector<string>&board,int &n){
          int x=row;
          int y=col;
          
          
          for(int i=0;i<row;i++){
              if(board[i][y]=='Q')
              return false;

          }

          x=row-1;
          y=col-1;

          while(x>=0 && y>=0){
              if(board[x][y]=='Q')
              return false;
              x--;
              y--;
          }

          x=row-1;
          y=col+1;

          while(x>=0 && y<n){
              if(board[x][y]=='Q')
              return false;
              x--;
              y++;
          }
          return true;
      }
     void solve(int row,vector<string>&board, vector<vector<string> >& res,int &n){

         if(row==n){
             res.push_back(board);
             return ;
         }

         for(int col=0;col!=n;col++){
             if(issafe(row,col,board,n)){
                 board[row][col]='Q';
                 solve(row+1,board,res,n);
                 board[row][col]='.';
             }
         }
     }
    vector<vector<string>> solveNQueens(int n) {
        
        vector<string>board(n,string(n, '.'));
        

 vector<vector<string> > res;
        solve(0,board,res,n);

        return res;
    }
};
