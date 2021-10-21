#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch;
    for(int i=0; i<n; i++){
        cin>>ch;
        if(ch=='b'|| ch=='B'){
            cout<<"BattleShip"<<endl;
        }
        else if(ch=='c'|| ch=='C'){
            cout<<"Cruiser"<<endl;
        }
        else if(ch=='d'|| ch=='D'){
            cout<<"Destroyer"<<endl;
        }
        else{
            cout<<"Frigate"<<endl;
        }
    }
    
}
