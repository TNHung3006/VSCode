package Cau34;

public class ClockS {
    private int seconds;

    public ClockS() {
        this.seconds = 0;
    }

    public void setTime(int h, int m, int s) {
        this.seconds = h * 3600 + m * 60 + s;
    }

    public int getHours() {
        return seconds / 3600;
    }

    public int getMinutes() {
        return (seconds % 3600) / 60;
    }

    public int getSeconds() {
        return seconds % 60;
    }

    public String getTime() {
        return String.format("%02d:%02d:%02d", getHours(), getMinutes(), getSeconds());
    }

    public int totalSeconds() {
        return seconds;
    }

    public void addSeconds(int s) {
        this.seconds += s;
        if (this.seconds < 0) {
            this.seconds = 86400 + this.seconds%86400;
        } else {
            this.seconds = this.seconds % 86400;
        }
    }
}
