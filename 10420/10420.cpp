#include <iostream>
#include <map>
#include <utility>
#include <string>
using namespace std;

int main(){
    int n;
    string name;
    string country;
    map<string, int> loved;
    cin >> n;
    while(n--){
        cin >> country;
        getline(cin, name);
        if(loved.find(country)!= loved.end()){
            loved[country] += 1;
        }
        else{
            loved.insert({country, 1});
        } 
    }
    for(const auto& temp: loved){
        cout << temp.first << " " << temp.second << endl;
    }
    return 0;
}