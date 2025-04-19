package Cau25;

import java.util.Hashtable;

public class DanhBaDienThoai {
    private Hashtable<String, String> danhBa;

    public DanhBaDienThoai() {
        danhBa = new Hashtable<>();
    }

    public void themEntry(String hoTen, String soDienThoai) {
        danhBa.put(hoTen, soDienThoai);
    }

    public String timSoDienThoai(String hoTen) {
        return danhBa.get(hoTen);
    }

    public boolean suaSoDienThoai(String hoTen, String soDienThoaiMoi) {
        if (danhBa.containsKey(hoTen)) {
            danhBa.put(hoTen, soDienThoaiMoi);
            return true;
        }
        return false;
    }

    public boolean xoaEntry(String hoTen) {
        if (danhBa.containsKey(hoTen)) {
            danhBa.remove(hoTen);
            return true;
        }
        return false;
    }

    public void lietKeDanhBa() {
        for (String hoTen : danhBa.keySet()) {
            System.out.println("Họ tên: " + hoTen + ", Số điện thoại: " + danhBa.get(hoTen));
        }
    }
}