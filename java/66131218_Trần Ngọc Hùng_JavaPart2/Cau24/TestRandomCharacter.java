package Cau24;
public class TestRandomCharacter {
    public static void main(String[] args) {
        // Tạo và in ra 175 ký tự thường ngẫu nhiên, mỗi hàng 25 ký tự
        for (int i = 0; i < 175; i++) {
            System.out.print(RandomCharacter.getRandomLowerCaseLetter() + " ");
            if ((i + 1) % 25 == 0) {
                System.out.println(); // Xuống dòng sau mỗi 25 ký tự
            }
        }
    }
}