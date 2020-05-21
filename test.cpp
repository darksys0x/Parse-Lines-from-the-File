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
    string line = "0,1,0,0,0,0";
    vector<int> solution {0,1,0,0,0,0};
    vector<int> testing;
    testing = printValue(line);

    if(testing != solution ){
        cout<< "filed"<<'\n';
        printInput(testing);
        cout<<s
        cout<<"--------------------------";

        
        
        
        
     }else
     {
         cout<< " passssssed";
     }
     
     cout<<'\n'<<"-----------------------------";


    return ;

}