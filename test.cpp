void printInput (vector<int> v){

        cout<<"{";
    for(int i = 0; i < v.size() ; i++){
        cout<<v[i];
        cout<<"}";
    }
}






void testFile (){
    cout<<"---------------------------"<<'\n';
    cout<<"your programming  ";
    string line = "0,1,0,0,0,0,";
    vector<int> solution_vect{0,1,0,0,0,0};
    vector<int> testing;
    testing = parsingLine(line);

    if(testing != solution_vect  ){
        cout<< "filed"<<'\n';
        printInput(testing);
        cout<<line;
        cout<<"--------------------------";

        
        
        
        
     }else
     {
         cout<< " passssssed";
     }
     
     cout<<'\n'<<"-----------------------------";


    

}