#include <iostream>
#include <string>
#include <vector>
using namespace std;
class NhanVien {
    protected:
        string id , name , phoneNumber , email;
        int age;
    public:
        virtual void input ()
        {
            cout << "Nhap Id : " ;
            cin >> this->id;
            cout << "Nhap Name : ";
            cin.ignore();
            getline (cin, this->name);
            cout << "Nhap phoneNumber : ";
            cin >> this->phoneNumber;
            cout << "Nhap email : ";
            cin >> this->email;
            cout << "Nhap Age : ";
            cin >> this->age;
        }
        NhanVien (string, string , string , string , int);
        virtual void output ()
        {
            cout << "Id : " << this->id << endl;
            cout << "Name : " << this->name << endl;
            cout << "PhoneNumber : " << this->phoneNumber << endl;
            cout << "Email : " << this->email << endl;
            cout << "Age : " << this->age << endl;
        }
        virtual  int GetLoai ()
        {
            return 0;
        }
        virtual int GetOverTime ()
        {

        }
        virtual int GetProductSold ()
        {

        }
};
NhanVien::NhanVien (string id = "" , string name = "" , string phoneNumber = "" , string email = "" , int age = 0)
{
    this->id = id;
    this->name = name;
    this->phoneNumber = phoneNumber;
    this->email = email;
    this->age = age;
}
class NhanVienHanhChinh : public NhanVien {
    private:
        int overTime;
    public:
        NhanVienHanhChinh (string , string , string , string , int , int);
        void input () override
        {
            NhanVien::input();
            cout << "Nhap overTime : " ;
            cin >> this->overTime;
        }
        void output () override
        {
            NhanVien::output ();
            cout << "OverTime : " << this->overTime << endl;
        }
        int GetOverTime () override
        {
            return this->overTime;
        }
};
NhanVienHanhChinh::NhanVienHanhChinh (string id = "" , string name = "" , string phoneNumber = "" , string email = "" , int age = 0 , int overTime = 0) : NhanVien (id,name,phoneNumber,email,age)
{
    this->overTime = overTime;
}

class NhanVienBanHang : public NhanVien {
    private:
        int productSold;
    public:
        NhanVienBanHang (string, string , string , string , int , int );
        void input () override
        {
            NhanVien::input ();
            cout << "Nhap productSold : ";
            cin >> this->productSold;
        }
        void output () override
        {
            NhanVien::output();
            cout << "ProductSold : " << this->productSold << endl;
        }
        int GetLoai () override
        {
            return 1;
        }
        int GetProductSold () override
        {
            return this->productSold;
        }

};

NhanVienBanHang::NhanVienBanHang (string id = "" , string name = "" , string phoneNumber = "" , string email = "" , int age = 0 , int productSold = 0) : NhanVien (id,name,phoneNumber,email,age)
{
    this->productSold = productSold;
}


class RunWindow {
    private:
        vector<NhanVien*> DsNhanVien;
        int n;
        void Menu ();
    public:
        void Run ();

};
void RunWindow::Menu ()
{
    cout << "--------------------MENU--------------------" << endl;
    cout << "1. Nhan vien hanh chinh ." << endl;
    cout << "2. Nhan vien ban hang ." << endl;
}
void RunWindow::Run ()
{
    cout << "Nhap so luong nhan vien : "; cin >> this->n;
    //DsNhanVien = new NhanVien[n];
    this->Menu();
    int choose;
    cout << "Nhap danh sach nhan vien : " << endl;
    for (int i = 0 ; i < n ; i++)
    {
        cout << "Nhap lua chon cua ban : "; cin >> choose;
        if (choose == 1)
        {
            NhanVienHanhChinh * tmp = new NhanVienHanhChinh();
            tmp->input();
            DsNhanVien.push_back(tmp);
            cout << endl;
        }
        else if (choose == 2)
        {
            NhanVienBanHang * tmp = new NhanVienBanHang();
            tmp->input();
            DsNhanVien.push_back(tmp);
            cout << endl;
        }
        else
        {
            cout << "Lua chon khong hop le , vui long nhap lai !" << endl;
            i--;
        }
    }

    cout << "------------------------------------------------------------" << endl;
    int maxOverTime = -1;
    int totalProduct = 0;
    int countOfNhanVienBanHang = 0;
    int avgOfProductSold;
    NhanVien tmp;
    cout << "Danh sach nhan vien la : " << endl;
    for (int i = 0 ; i < n ; i++)
    {
        if (DsNhanVien[i]->GetLoai())
        {
            cout << "Nhan Vien Ban Hang : " << endl;
            countOfNhanVienBanHang++;
            totalProduct += DsNhanVien[i]->GetProductSold();
        }
        else
        {
            cout << "Nhan Vien Hanh Chinh : " << endl;
            if (DsNhanVien[i]->GetOverTime() > maxOverTime)
            {
                tmp = *DsNhanVien[i];
            }

        }
        DsNhanVien[i]->output();
        cout <<endl;
    }
    cout << "Nhan vien hanh chinh co overTime cao nhat la : " << endl;
    tmp.output();
    cout << endl;
    cout << "Tong san pham trung binh ban duoc cua nhan vien ban hang la : " << totalProduct / countOfNhanVienBanHang << " San pham" << endl;
    cout << endl;
    cout << "Cac nhan vien ban hang co san phan ban duoc lon hon trung binh la : " << endl;
    for (int i = 0 ; i < n ; i++)
    {
        if (DsNhanVien[i]->GetLoai())
        {
            cout << "Nhan Vien Ban Hang : " << endl;
            DsNhanVien[i]->output();
            cout << endl;
        }
    }
    cout << endl;
    cout << "So luong nhan vien ban hang la : " << countOfNhanVienBanHang << endl;
}
int main ()
{
    RunWindow X;
    X.Run();
    return 0;
}