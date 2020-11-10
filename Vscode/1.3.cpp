#include<iostream>
#include<string>

#include<cmath>
using namespace std;


string URLify(string s1){

    /*extract lenght of string*/
    int slen = s1.length();
    int power, len = 0;
    for (int i = slen - 1; s1[i] != ' '; i--) {
        power = slen - i-1;
        len += (s1[i] - '0') * pow(10, power);

    }
   
    /*count the number of space*/
    int spaceNum = 0;
    for (int i =1; i<len+1; i++){
        if (s1[i]== ' ')
            spaceNum++;
    }

    /*construct new string*/
    int len2 =len+2*spaceNum +2 ;
    int k = 0;
    string s2(len2,0);
    s2[0] = '"';
    for(int j = 1; j< len+1; ++j){
        if(s1[j] != ' ')
            s2[j+2*k] = s1[j];
        else
        {
            s2[j+2*k] = '%';
            s2[j+2*k+1] = '2';
            s2[j+2*k+2] = '0';
            k++;

        }
    }
    
    s2[len2-1] = '"';
    //cout << len << endl;
    //cout << spaceNum<< endl;
    //cout << len2 << endl;

    return s2;

}


int main(){
    string s1;
    int num;
 
    getline(cin, s1);
  
    cout <<URLify(s1) << endl;
    //cout << s1 << endl;
    //cout << num << endl;
}