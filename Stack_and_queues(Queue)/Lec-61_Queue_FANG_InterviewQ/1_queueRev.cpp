
void solve( queue<int> &q){
    
    if(q.empty()){
        return;
    }
    
    int peek = q.front();
    q.pop();
    
    solve(  q);
    
    q.push(peek);
    
}


    
queue<int> rev(queue<int> q)
{
    solve( q);
    return q;

}