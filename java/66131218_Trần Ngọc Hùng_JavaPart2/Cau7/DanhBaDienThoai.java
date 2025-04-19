package Cau7;

import java.util.Vector;

public class DanhBaDienThoai {
    private Vector<Entry> danhBa;

    public DanhBaDienThoai() {
        danhBa = new Vector<>();
    }

    public void themEntry(String hoTen, String soDienThoai) {
        Entry entry = new Entry(hoTen, soDienThoai);
        danhBa.add(entry);
    }

    public String timSoDienThoai(String hoTen) {
        for (Entry entry : danhBa) {
            if (entry.getHoTen().equalsIgnoreCase(hoTen)) {
                return entry.getSoDienThoai();
            }
        }
        return null;
    }

    public boolean suaSoDienThoai(String hoTen, String soDienThoaiMoi) {
        for (Entry entry : danhBa) {
            if (entry.getHoTen().equalsIgnoreCase(hoTen)) {
                entry.setSoDienThoai(soDienThoaiMoi);
                return true;
            }
        }
        return false;
    }

    public boolean xoaEntry(String hoTen) {
        for (int i = 0; i < danhBa.size(); i++) {
            if (danhBa.get(i).getHoTen().equalsIgnoreCase(hoTen)) {
                danhBa.remove(i);
                return true;
            }
        }
        return false;
    }

    public void lietKeDanhBa() {
        for (Entry entry : danhBa) {
            System.out.println(entry);
        }
    }
}
