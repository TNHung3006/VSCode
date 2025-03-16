public class Cau26{
        // Phương thức tính USCLN
        public static int uscln(int m, int n) {
            if (n == 0) {
                return m;
            }
            return uscln(n, m % n);
        }
    
        // Phương thức tính BSCNN
        public static int bscnn(int m, int n) {
            return (m * n) / uscln(m, n);
        }
    
        public static void main(String[] args) {
            int num1 = 24;
            int num2 = 36;
    
            int gcd = uscln(num1, num2);
            int lcm = bscnn(num1, num2);
    
            System.out.println("USCLN cua " + num1 + " và " + num2 + " là: " + gcd);
            System.out.println("BSCNN cua " + num1 + " và " + num2 + " là: " + lcm);
        }
}