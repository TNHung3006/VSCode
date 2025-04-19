package Cau13;

public class TestStock {
    public static void main(String[] args) {
        // Tạo đối tượng Stock
        Stock stock = new Stock("SUNW", "Sun Microsystems Inc");

        // Đặt giá trị
        stock.setPreviousClosingPrice(100);
        stock.setCurrentPrice(90);

        // Hiển thị tỷ lệ thay đổi
        System.out.println("Tỷ lệ thay đổi giá cổ phiếu: " + stock.changePercent() + "%");
    }
}
