package Cau24;

import java.util.Random;

public class RandomCharacter {

    /** Trả lại một ký tự ngẫu nhiên trong đoạn từ ký tự ch1 đến ch2 */
    public static char getRandomCharacter(char ch1, char ch2) {
        Random random = new Random();
        return (char) (ch1 + random.nextInt(ch2 - ch1 + 1));
    }

    /** Trả lại một ký tự thường ngẫu nhiên */
    public static char getRandomLowerCaseLetter() {
        return getRandomCharacter('a', 'z');
    }

    /** Trả lại một ký tự hoa ngẫu nhiên */
    public static char getRandomUpperCaseLetter() {
        return getRandomCharacter('A', 'Z');
    }

    /** Trả lại một ký tự số ngẫu nhiên trong đoạn từ '0' đến '9' */
    public static char getRandomDigitCharacter() {
        return getRandomCharacter('0', '9');
    }

    /** Trả lại một ký tự ngẫu nhiên */
    public static char getRandomCharacter() {
        return getRandomCharacter('\u0000', '\uFFFF');
    }
}