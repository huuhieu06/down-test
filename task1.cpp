#include <iostream>
using namespace std;
enum loai{
    NGHEO,
    CANNGHEO,
    BINHDAN,
    GIAU
};
struct hoadon {
    string hoten;
    float khuyenmai, thanhtien, thanhtoan;
    loai loaikhach;
};
void nhap(hoadon &kh){
    int chon;
    cout <<"Nhập tên ";
    getline(cin,kh.hoten);
    cout <<"Chọn lọai khách hàng : (1.NGHÈO 2.CẬN NGHÈO  3.BÌNH DÂN ) " ;
    cin >> chon;
    switch (chon)
    {
    case 1:
        kh.loaikhach = NGHEO;
        kh.khuyenmai = 0.5;
        break;
    case 2:
        kh.loaikhach = CANNGHEO;
        kh.khuyenmai = 0.25;
        break;
    case 3:
        kh.loaikhach = BINHDAN;
        kh.khuyenmai = 0.1;
        break;
    default:
        cout <<"    Qúy khách là hộ gia đình khá giả ! "<<endl;
        cout <<" Mặc định không KHUYẾN MÃI đối với bạn !!";
        kh.loaikhach = GIAU;
        kh.khuyenmai = 0.0;
        break;
    }
    cout <<"Nhập số tiền :";
    cin >> kh.thanhtien;

    kh.thanhtoan = kh.thanhtien*(1-kh.khuyenmai);
}
void xuat(const hoadon &kh){
    cout << "\n--- Thông tin hóa đơn ---\n";
    cout << "Họ và tên: " << kh.hoten << endl;
    cout << "Loại khách hàng : ";
    switch (kh.loaikhach) {
        case NGHEO: cout << "NGHÈO"; break;
        case CANNGHEO: cout << "CẬN NGHÈO"; break;
        case BINHDAN: cout << "BÌNH THƯỜNG"; break;
        case GIAU: cout <<"GIÀU"; break;
    }
    cout << endl;
    cout << "Tổng số tiền: " << kh.thanhtien << endl;
    cout << "Khuyến mãi: " << kh.khuyenmai * 100 << "%" << endl;
    cout << "Số tiền cần thanh toán: " << kh.thanhtoan << endl;
}
int main(){
    hoadon kh;
    nhap(kh);
    xuat(kh);
}