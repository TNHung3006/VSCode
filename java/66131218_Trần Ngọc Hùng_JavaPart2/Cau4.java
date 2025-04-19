public class Cau4{
	public static void main (String args[]){
		int i = 5;
		TangGiaTri inc = new TangGiaTri();
		inc.tang(i);
		System.out.println("i = " +i);
	}
}
class TangGiaTri{
	public void tang(int x){
		x = x -2;
		System.out.println("x = " +x);
	}
}
