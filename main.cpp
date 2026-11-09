#include <iostream>
//#pragma comment (lib,"Ws2_32.lib")
#include <winsock2.h>
//попытка сетевого программирования
using namespace std;

int main(int argc, char* argv[]){
    if(argc !=3) cout << "malo argumentov";
    else{
        cout <<"command "<< argv[1] <<'\n';
        cout <<"domain "<< argv[2] <<'\n';
    }
    WSADATA wsdata;
    
    int result;
    result = WSAStartup(MAKEWORD(2,2),&wsdata);
    if(result !=0){cout << "error " << result;} //проверка на ошибку и вывод 

    return 1;
}