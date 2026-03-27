// Reverse Bits
// Input  43261596      00000010100101000001111010011100
// OutPut 964176192     00111001011110000010100101000000

#include<iostream>
using namespace std;

string int_bin(int n){
    string s = "";
    int r;

    while(true){
        if(n==1){
            s+='1';
            break;
        }
        r=n%2;
        n/=2;
        if(r)
            s+='1';
        else
            s+='0';
    }







    while(s.size()<32)s+='0';
    return s;
}

void bin_int(string s,int& k){
    int sum=0;
    int r=1;
    int i=31;
    while(i>=0){
        if(s[i--]=='1')
            sum+=r;
        r*=2;
    }




k=sum;}
int main(){
    system("cls");
    int n = 43261596;
    // n=9;
    // string s = ;
    bin_int(int_bin(n),n);
    cout<<n<<endl<<"964176192";
    return 0;
}