#include<iostream>
#include<cstdio>
#include<cmath>
#define db(a) cout << #a << " = " << a << endl;
using namespace std;
int divisores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
string romanos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int main(){
    string numero;
    int num;
    while(cin >> numero){
        int len = numero.size();
        num = 0;
        if(numero[0] > '0' && numero[0] <= '9'){
            int p = 1;
            for(int i = 0; i < len; i++){
                num += p * (numero[len - i - 1] - 48); 
                p *= 10;
            }
            string res = "";
            for(int i = 0; i < 13; i++){
                if(num >= divisores[i]){
                    int div = num / divisores[i];
                    num = num % divisores[i];
                    for(int k = 0; k < div; k++)
                        res += romanos[i];
                }
            }
            cout << res << endl;
             
        }
        else{
            for(int i = 0; i < len; i++){
                if(numero[i] == 'M') {
                    num += 1000;
                    continue;
                }
                if(numero[i] == 'C' && i + 1 < len && numero[i + 1] == 'M') {
                    num += 900;
                    i++;
                    continue;
                }
                if(numero[i] == 'D') {
                    num += 500;
                    continue;
                }
                if(numero[i] == 'C' && i + 1 < len && numero[i + 1] == 'D') {
                    num += 400;
                    i++;
                    continue;
                }
                else if(numero[i] == 'C') {
                    num += 100;
                    continue;
                }
                if(numero[i] == 'X' && i + 1 < len && numero[i + 1] == 'C') {
                    num += 90;
                    i++;
                    continue;
                }
                if(numero[i] == 'L') {
                    num += 50;
                    continue;
                }
                if(numero[i] == 'X' && i + 1 < len && numero[i + 1] == 'L') {
                    num += 40;
                    i++;
                    continue;
                }
                if(numero[i] == 'X') {
                    num += 10;
                    continue;
                }
                if(numero[i] == 'I' && i + 1 < len && numero[i + 1] == 'X') {
                    num += 9;
                    i++;
                    continue;
                }
                if(numero[i] == 'V') {
                    num += 5;
                    continue;
                }
                if(numero[i] == 'I' && i + 1 < len && numero[i + 1] == 'V') {
                    num += 4;
                    i++;
                    continue;
                }
                if(numero[i] == 'I') {
                    num++;
                    continue;
                }
            }
            cout << num << endl;
        }
    }
    return 0;
}
