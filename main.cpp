#include <iostream>
#include <string>
using namespace std;

struct titik{
    int x;
    int y;
};
enum arah {atas, kanan, bawah, kiri};
void gesertitik(titik &kordinat, arah arah, int nilai){
    switch (arah){
        case atas: kordinat.y += nilai; break;
        case kanan: kordinat.x += nilai; break;
        case kiri: kordinat.x -= nilai; break;
        case bawah: kordinat.y -= nilai; break;
        
    }
}
int main(){
    titik A;
    A.x = 0 ;
    A.y = 0;
    cout << "titik sebelum digeser: A("<< A.x << "," << A.y << ")" ;
    gesertitik (A, kanan, 10);
    gesertitik (A, atas, 2);
     cout << "titik sesudah digeser: A("<< A.x << "," << A.y << ")" ;
return 0;
}