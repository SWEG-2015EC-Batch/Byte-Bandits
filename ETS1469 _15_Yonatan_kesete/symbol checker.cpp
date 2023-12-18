#include<iostream>
using namespace std;
int main(){
cout<<"enter character:";
char ch;
cin>>ch;
if(ch>='a'&&ch<='z'){
    switch(ch){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        cout<<"vowel lowercase"<<endl;
        break;
    default:
        cout<<"consonant lowecase"<<endl;
    }
}

else if(ch>='A'&&ch<='Z'){
    switch(ch){
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout<<"vowel uppercase"<<endl;
        break;
    default:
        cout<<"consonant uppercase"<<endl;
}
}
else if(ch>='0'&&ch<='9'){
    if(ch%2==0)
        cout<<"even number"<<endl;
    else
        cout<<"odd number"<<endl;
}
else
    cout<<"alpha numeric character"<<endl;
    return 0;

}
