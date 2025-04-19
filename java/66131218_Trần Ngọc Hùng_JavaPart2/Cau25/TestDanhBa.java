package Cau25;

import java.util.Scanner;

public class TestDanhBa {
    public static void main(String[] args) {
        DanhBaDienThoai danhBa = new DanhBaDienThoai();
        Scanner scanner = new Scanner(System.in);
        int luaChon;

        do {
            System.out.println("\n--- MENU ---");
            System.out.println("1. Thêm entry");
            System.out.println("2. Tìm số điện thoại");
            System.out.println("3. Sửa số điện thoại");
            System.out.println("4. Xóa entry");
            System.out.println("5. Liệt kê danh bạ");
            System.out.println("0. Thoát");
            System.out.print("Nhập lựa chọn của bạn: ");
            luaChon = scanner.nextInt();
            scanner.nextLine(); // Đọc dòng new line

            switch (luaChon) {
                case 1:
                    System.out.print("Nhập họ tên: ");
                    String hoTenThem = scanner.nextLine();
                    System.out.print("Nhập số điện thoại: ");
                    String soDienThoaiThem = scanner.nextLine();
                    danhBa.themEntry(hoTenThem, soDienThoaiThem);
                    System.out.println("Đã thêm entry.");
                    break;
                case 2:
                    System.out.print("Nhập họ tên cần tìm: ");
                    String hoTenTim = scanner.nextLine();
                    String soDienThoaiTim = danhBa.timSoDienThoai(hoTenTim);
                    if (soDienThoaiTim != null) {
                        System.out.println("Số điện thoại của " + hoTenTim + " là: " + soDienThoaiTim);
                    } else {
                        System.out.println("Không tìm thấy " + hoTenTim + " trong danh bạ.");
                    }
                    break;
                case 3:
                    System.out.print("Nhập họ tên cần sửa: ");
                    String hoTenSua = scanner.nextLine();
                    System.out.print("Nhập số điện thoại mới: ");
                    String soDienThoaiMoi = scanner.nextLine();
                    if (danhBa.suaSoDienThoai(hoTenSua, soDienThoaiMoi)) {
                        System.out.println("Đã sửa số điện thoại cho " + hoTenSua + ".");
                    } else {
                        System.out.println("Không tìm thấy " + hoTenSua + " trong danh bạ.");
                    }
                    break;
                case 4:
                    System.out.print("Nhập họ tên cần xóa: ");
                    String hoTenXoa = scanner.nextLine();
                    if (danhBa.xoaEntry(hoTenXoa)) {
                        System.out.println("Đã xóa " + hoTenXoa + " khỏi danh bạ.");
                    } else {
                        System.out.println("Không tìm thấy " + hoTenXoa + " trong danh bạ.");
                    }
                    break;
                case 5:
                    System.out.println("--- Danh bạ ---");
                    danhBa.lietKeDanhBa();
                    break;
                case 0:
                    System.out.println("Thoát chương trình.");
                    break;
                default:
                    System.out.println("Lựa chọn không hợp lệ.");
            }
        } while (luaChon != 0);

        scanner.close();
    }
}
