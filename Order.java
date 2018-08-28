class OrderBook {
    static String authorname = "Yaswanth";
    final static int price = 4000;
    final static int due = 5;
    public static int month;
    static int paidamt;
    static int balanceamt;

    static class Installment {

        public static void payment(int n) {
            System.out.println("Price of book is: " + price);
            System.out.println("due month:" + due);
            int monthlydue = price / due;
            if (due <= 5) {
                for (month = 1; month <= n; month++) {
                    paidamt = monthlydue * month;
                    balanceamt = price - paidamt;
                }
                System.out.println(" Paid amt till : " + n + " \n month is " + paidamt + " balance amt to be paid is :" + balanceamt);
            }
        }

        void display() {
            System.out.println("Auther name of book" + authorname);
            System.out.println("Price of the book" + price);
        }

    }

}

public class Order {

    public static void main(String args[]) {
        OrderBook.Installment customer1 = new OrderBook.Installment();
        customer1.display();
        OrderBook.Installment.payment(3);
    }
}