class StaticStuff{
 static int x = 10;
 static {x = x +5;}
 public static void main(String args[]){
   System.out.println("x= "+x);
 }
 static { x = x/5;}
}