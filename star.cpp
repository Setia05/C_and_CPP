#include <iostream> 
    using namespace std;
    int main(){ 
    int n=8;
 
    while(n--){
        int m = 8;
        if(n%2!=0){
            while(m--){
                cout<<"*";
            }
        }
        else{
            cout<<"  ";
            while(m--){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    return 0;
    }
