#include <iostream>
using namespace std;
enum loai{
    VIP,
    THANTHIET,
    VANGLAI
};
struct hoadon{
    string hoten;
    float khuyenmai, thanhtien, thanhtoan;
    loai khach;
};
void nhap(hoadon &kh){
    int chon;
    cout <<"Nhap ten :";
    getline(cin,kh.hoten);
    cout <<"Chon loai khach (1.VIP  2.THANTHIET  3.VANGLAI) ";
    cin >> chon;
    switch (chon) {
        case 1:
            kh.khach = VIP;
            kh.khuyenmai = 0.5;
            break;
        case 2:
            kh.khach = THANTHIET;
            kh.khuyenmai = 0.25;
            break;
        case 3:
            kh.khach = VANGLAI;
            kh.khuyenmai = 0.1;
            break;
    }
    cout <<"Nhap so tien: ";
    cin >> kh.thanhtien;
    kh.thanhtoan = kh.thanhtien * (1-kh.khuyenmai);
}
void xuat(hoadon &kh){
    cout <<"Ho ten : "<< kh.hoten<<endl;
    cout <<"Loai khach hang :";
    switch (kh.khach){
        case VIP : cout <<"VIP"; break;
        case THANTHIET : cout <<"THANTHIET"; break;
        case VANGLAI : cout <<"VANGLAI"; break;
    }
    cout << endl;
    cout <<"So tien can thanh toan : " << kh.thanhtoan;
}
int main(){
    hoadon kh;
    nhap(kh);
    xuat(kh);
}