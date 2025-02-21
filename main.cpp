#include <string>
#include <iostream>
using namespace std;

struct tths{
    string hoten, xeploai;
    float toan, li, hoa, dtb;
};  

void nhaptt(tths &hs){
    cout<<"Nhap ho va ten: ";
    getline(cin, hs.hoten);
    cout<<"Nhap diem Toan: ";
    cin>>hs.toan; 
    cout<<"Nhap diem Ly: ";
    cin>>hs.li; 
    cout<<"Nhap diem Hoa: ";
    cin>>hs.hoa; 
}

void tinhdtb(tths &hs){
    hs.dtb = (hs.toan + hs.li + hs.hoa)/3;
}

void xeploaihs(tths &hs){
    if(hs.dtb > 10) hs.xeploai = "Tao Lao Ha May";
    else if (hs.dtb>=9) hs.xeploai = "Xuat sac";
    else if (hs.dtb>=8) hs.xeploai = "Gioi";
    else if (hs.dtb>=7) hs.xeploai = "Kha";
    else if (hs.dtb>=5) hs.xeploai = "Trbinh hoac Yeu";
}

void output(tths &hs){
    cout<<endl;
    cout<<"Ho va ten cua ban la: "<<hs.hoten<<endl;
    cout<<"Diem Toan: "<<hs.toan<<endl;
    cout<<"Diem Li: "<<hs.li<<endl;
    cout<<"Diem Toan: "<<hs.hoa<<endl;
    cout<<"Diem trung binh: "<<hs.dtb<<endl;
    cout<<"Xep loai: "<<hs.xeploai<<endl;
}

int main(){
    tths hs;
    nhaptt(hs);
    tinhdtb(hs);
    xeploaihs(hs);
    output(hs);
}
