#include <iostream>
#include <cstdio>
using namespace std;
void decoder(char *s, char *s1[], int len){
    char str[100];
    for(int i = 0; i<51; i++){
        for(int j = 0; j<len;j++){
        if(s[i]==s1[j]){
            cout<<i<<endl;
         }}}
    }
int main(){
    setlocale(LC_ALL, "Russian");
    cout << "This program encodes a sentence based on the text: He would remember that honesty is the best policy!" << endl;
	cout << endl;
    int len;
    cout << "Specify the length of the string in characters: "<<endl;
    cin >> len;
    char *s1 = new char[len];
    for( int i=0; i<len; i++ )
        cin >> s1[len];
    char s[]="He would remember that honesty is the best policy! ";

    decoder(s,s1,len);
    return 0;
    }
