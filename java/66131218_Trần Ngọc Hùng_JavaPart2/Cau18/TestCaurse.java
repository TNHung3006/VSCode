package Cau18;
public class TestCaurse {
    public static void main(String[] args) {
        // Tạo hai đối tượng Course
        Course course1 = new Course("lap trinh Java");
        Course course2 = new Course("CTDL&GT");

        // Thêm sinh viên vào từng khóa học
        course1.addStudent("Nguyen Van A");
        course1.addStudent("Tran Thi B");
        course1.addStudent("Le Van C");

        course2.addStudent("Pham Thi D");
        course2.addStudent("Hoang Van E");

        // Hiển thị thông tin khóa học
        System.out.println("Khoa hoc 1: " + course1.getName());
        System.out.println("So luong sinh vien: " + course1.getNumberOfStudents());
        System.out.println("Danh sach sinh vien:");
        for (int i = 0; i < course1.getNumberOfStudents(); i++) {
            System.out.println("- " + course1.getStudents()[i]);
        }

        System.out.println("\nKhoa hoc 2: " + course2.getName());
        System.out.println("So luong sinh vien: " + course2.getNumberOfStudents());
        System.out.println("danh sach sinh vien:");
        for (int i = 0; i < course2.getNumberOfStudents(); i++) {
            System.out.println("- " + course2.getStudents()[i]);
        }
    }
}

