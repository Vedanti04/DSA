//Vector : A dynamic array (size can grow/shrink automatically).
// It stores values in similar pattern as array does .

void explainVector(){

    vector<int> v;     // empty

    v.push_back(1);     // add to end 
    v.emplace_back(2);  // slightly faster than push_back

    vector<pair<int, int>> vec;    //Vector  of pairs 

    v.push_back({1,2});
    v.emplace_back(1,2);

    vector<int> v(5,100);   //{100,100,100,100,100} declares  5 instances of 100

    vector<int> v(5);       //{0,0,0,0,0} garbage value instances inserted 

    vector<int> v1(5,20);    // {20,20,20,20,20} declares  5 instances of 20
    vector<int> v2(v1);      //copy of v1 in another container declares  5 instances of 20
    
    // you can always increse the size of vector even if you are predefining the size 

    vector <int>::iterator it = v.begin();       //v.begin() = points at the starting memory 
    
    it++;                                       // shifts on side and points at the memory 
    cout << *(it) << " ";     // *(it)= acesses the value of that memory 

    it = it + 2;
    cout << *(it) << " ";      

     vector <int>::iterator it = v.end();  
     vector <int>::iterator it = v.rend();     // reverse end 
     vector <int>::iterator it = v.rbegin();    // reverse begin


    cout << v[0] << " " << v.at[0];
    cout << v.back() <<" ";          // 

    for(vector<int>::iterator it = v.begin(); it !=v.end(); it++){     
        cout << *(it) <<" ";                                      // you can print all the vector 
    }

    for (auto it = v.begin(); it !=v.end(); it++) {            // automatically assign = auto
        cout << *(it) <<" ";

    }
    
    for (auto it : v){                  // another way of printing vector
        cout << it << " ";               
    }
    
    //{10,20,12,23}
    v.erase(v.begin()+1);

    //{10,20,12,23,35}
     v.erase(v.begin()+ 2,v.begin() + 4);       //output ={10,20,35} {start , end}

     

}
