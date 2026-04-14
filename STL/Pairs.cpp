//pairs = Is a part of Utility Liberary
//A pair stores two values together (can be same or different data types).

void explainPair(){
  
    pair<int,int> p = {1.3};

    cout << p.first << " " <<p.second ;

    //nested property of pair for taking 3 values or variable.. or more 
    
    pair<int, pair<int, int>> p = {1,{3,4}};

    cout << p.first << " " << p.second.second << " " << p.second.first;
   
    //Pair-Array 

    pair<int , int> arr[] = {{1,2},{3,4},{41}}

    cout << arr[1].second;

}