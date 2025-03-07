#include <iostream>
#include <vector>

class Candidate {
private:
    std::string ma;
    std::string ten;
    std::string ngay_sinh;
    float diem_toan;
    float diem_van;
    float diem_anh;

public:
    Candidate(std::string ma, std::string ten, std::string ngay_sinh, float diem_toan, float diem_van, float diem_anh) {
        this->ma = ma;
        this->ten = ten;
        this->ngay_sinh = ngay_sinh;
        this->diem_toan = diem_toan;
        this->diem_van = diem_van;
        this->diem_anh = diem_anh;
    }

    float tinh_tong_diem() {
        return diem_toan + diem_van + diem_anh;
    }

    std::string getMa() {
        return ma;
    }

    std::string getTen() {
        return ten;
    }

    std::string getNgaySinh() {
        return ngay_sinh;
    }
};

class TestCandidate {
private:
    std::vector<Candidate> danh_sach_thi_sinh;

public:
    void nhap_danh_sach_thi_sinh() {
        int n;
        std::cout << "Nhap so luong thi sinh: ";
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cout << "Nhap thong tin thi sinh thu " << i+1 << ":" << std::endl;
            std::string ma, ten, ngay_sinh;
            float diem_toan, diem_van, diem_anh;
            std::cout << "Ma thi sinh: ";
            std::cin >> ma;
            std::cout << "Ten thi sinh: ";
            std::cin >> ten;
            std::cout << "Ngay thang nam sinh: ";
            std::cin >> ngay_sinh;
            std::cout << "Diem Toan: ";
            std::cin >> diem_toan;
            std::cout << "Diem Van: ";
            std::cin >> diem_van;
            std::cout << "Diem Anh: ";
            std::cin >> diem_anh;
            Candidate thi_sinh(ma, ten, ngay_sinh, diem_toan, diem_van, diem_anh);
            danh_sach_thi_sinh.push_back(thi_sinh);
        }
    }

    void in_thi_sinh_co_tong_diem_lon_hon_15() {
        std::cout << "Danh sach thi sinh co tong diem lon hon 15:" << std::endl;
        for (const auto& thi_sinh : danh_sach_thi_sinh) {
            float tong_diem = thi_sinh.tinh_tong_diem();
            if (tong_diem > 15) {
                std::cout << "Ma: " << thi_sinh.getMa() << ", Ten: " << thi_sinh.getTen() << ", Tong diem: " << tong_diem << std::endl;
            }
        }
    }
};

int main() {
    TestCandidate test;
    test.nhap_danh_sach_thi_sinh();
    test.in_thi_sinh_co_tong_diem_lon_hon_15();

    return 0;
}