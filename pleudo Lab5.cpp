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
    cout << "Ёта программа кодирует предложение, основыва€сь на текст: He would remember that honesty is the best policy!" << endl;
	cout << endl;
    int len;
    cout << "”кажите длину строки в символах: "<<endl;
    cin >> len;
    char *s1 = new char[len];
    for( int i=0; i<len; i++ )
        cin >> s1[len];
    char s[]="He would remember that honesty is the best policy! ";

    decoder(s,s1,len);
    return 0;
    }
