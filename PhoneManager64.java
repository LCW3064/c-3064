import java.util.Scanner;

class Phone {
   private String name, tel;
   static int count;
   int pno;
   
   public Phone(String name, String tel) {
      this.name = name;
      this.tel = tel;
   }
   public String getName() { return name; }
   public String getTel() { return tel; }
}
public class PhoneManager64 {
   public static void main(String[] args) {
      Scanner in = new Scanner(System.in);
      
      System.out.print("인원수>>");
      int n = in.nextInt();
      Phone[] arr = new Phone[n];
      
      
      for (int i = 0; i < n; i++) {
         System.out.print("이름과 전화번호(번호는 연속적으로 입력)>>");
         arr[i] = new Phone(in.next(), in.next());
         ++arr[i].count;
         arr[i].pno = arr[i].count;
      }
      System.out.println("저장되었습니다...");
      
      while(true) {
         System.out.print("검색할 이름>>");
         String serchN = in.next();
         
         if (serchN.equals("exit")) {
            System.out.println("프로그램을 종료합니다...");
            break;
         }
         for (int i = 0; i < n; i++) {
            if (serchN.equals(arr[i].getName())) {
               System.out.println(serchN + "의 번호는 " + arr[i].pno + "번이고 전화번호는 " +  arr[i].getTel() + " 입니다.");
            }
            else if (i == n-1) {
               System.out.println(serchN + " 이 없습니다.");
               break;
            }
         }
      }
   }
}

