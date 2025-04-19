package Cau7;

public class Entry {
    private String hoTen;
    private String soDienThoai;

    public Entry(String hoTen, String soDienThoai) {
        this.hoTen = hoTen;
        this.soDienThoai = soDienThoai;
    }

    public String getHoTen() {
        return hoTen;
    }

    public String getSoDienThoai() {
        return soDienThoai;
    }

    public void setSoDienThoai(String soDienThoai) {
        this.soDienThoai = soDienThoai;
    }

    @Override
    public String toString() {
        return "Họ tên: " + hoTen + ", Số điện thoại: " + soDienThoai;
    }
}
