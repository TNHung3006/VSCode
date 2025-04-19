package Cau13;

public class Stock {
    private String symbol;
    private String name;
    private double previousClosingPrice;
    private double currentPrice;

    // Phương thức khởi tạo mặc định
    public Stock() {
    }

    // Phương thức khởi tạo với ký hiệu và tên
    public Stock(String symbol, String name) {
        this.symbol = symbol;
        this.name = name;
    }

    // Các phương thức truy cập giá trị
    public String getSymbol() {
        return symbol;
    }

    public String getName() {
        return name;
    }

    public double getPreviousClosingPrice() {
        return previousClosingPrice;
    }

    public double getCurrentPrice() {
        return currentPrice;
    }

    // Các phương thức thay đổi giá trị
    public void setPreviousClosingPrice(double previousClosingPrice) {
        this.previousClosingPrice = previousClosingPrice;
    }

    public void setCurrentPrice(double currentPrice) {
        this.currentPrice = currentPrice;
    }

    // Phương thức tính tỷ lệ thay đổi
    public double changePercent() {
        return (currentPrice - previousClosingPrice) / previousClosingPrice * 100;
    }
}
