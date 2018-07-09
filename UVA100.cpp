#include <iostream>
#include <cstdio>

using namespace std;

int main()
{   int a,b;
    while(scanf("%d %d",&a,&b) != EOF){
    int max_largo = 0;
    int may = (a > b) ? a:b;
    int men = (a < b) ? a:b;
    while (men <= may){
        int largo = 1;
        int i = men;
        while(i != 1){
            if ( i % 2 == 1 ) {
            i = 3 * i + 1;
            i >>= 1;
            largo += 2;
            }
            else {
            i >>= 1;
            largo++;
            }
        }
        if (largo > max_largo) max_largo = largo;
        men++;
    }
    cout << a << " " << b << " " << max_largo << endl;
    }
return 0;
}



