#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>  
using namespace std;


string binario(int numero){
    int aux =  numero,resto,i=0;
    string resultado;
    do{
        resto = aux%2;
        resultado+= to_string(resto);
        aux = aux/2;
        i++;
    }while(aux !=0);
    reverse(resultado.begin(), resultado.end());
    return resultado;
}

int decimal(string s){
    int tam = s.size(),num=0;
    reverse(s.begin(), s.end());
    string aux;
    for(int i=0; i<tam;i++){
        aux = s[i];
        num = num + stoi(aux)*(pow(2,i));
    }
    return num;
}

int main(){
    int n=256;
    string s;
    s = binario(n);
    cout <<" 256 em binario e :"<<s<<endl;
    cout <<binario(n)<<" em decimal e igual a :" <<decimal(s);
    return 0;
}
