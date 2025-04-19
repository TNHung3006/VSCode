package Cau34;

public class TestClockS {
    public static void main(String[] args) {
        ClockS clock = new ClockS();

        clock.setTime(10, 30, 45);
        System.out.println("Thoi gian hien taii: " + clock.getTime());
        System.out.println("Tong so giay: " + clock.totalSeconds());

        clock.addSeconds(60);
        System.out.println("Thoi gian sau khi them 60 giay: " + clock.getTime());

        clock.addSeconds(-3661);
        System.out.println("Thoi gian sau khi tru 1 gio 1 phut 1 giay la: " + clock.getTime());

        System.out.println("Hours: " + clock.getHours());
        System.out.println("Minutes: " + clock.getMinutes());
        System.out.println("Seconds: " + clock.getSeconds());
    }
}
