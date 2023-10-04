 unordered_map<int,int>x;
    bool flag=0;
    
    bool ischeck(int index,int i,bool graph[101][101],int &n){
        for(int j=0;j<n;j++){
            if(graph[index][j]==1 && x[j]==i){
                return false;
            }
        }
        return true;
    }
    
    bool colour(int index,bool graph[101][101],int &m,int &n){
        if(index==n){
            
            return  true ;
        }
        
        for(int i=0;i<m;i++){
            if(ischeck(index,i+1,graph,n)){
                
                x[index]=i+1;
                
              if(colour(index+1,graph,m,n)){
                  return true;
              }
                
                x.erase(index);
            }
        }
        return false;
    }
    bool graphColoring(bool graph[101][101], int m, int n) {
        // your code here
        
        
       return  colour(0,graph,m,n);
        
       
        
    }