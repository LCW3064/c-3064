import java.util.Scanner;

abstract class Shape{
	abstract void draw();
}

class Editor extends Shape{
	Scanner sc=new Scanner(System.in);
	public int i=0;
	private String [] shape=new String[10];
	
	public void insert() {
		System.out.print("도형 종류 Line(1), Rect(2), Circle(3)>>");
		int choice=sc.nextInt();
		switch(choice) {
		case 1:
			shape[i]="Line";
			i++;
			break;
		case 2:
			shape[i]="Rect";
			i++;
			break;
		case 3:
			shape[i]="Circle";
			i++;
			break;
		}
	}
	
	public void delete() {
		System.out.print("삭제할 도형의 위치>>");
		int location=sc.nextInt();
		if(i<location) {
			System.out.println("삭제할 수 없습니다.");
		}
		else {
			shape[location-1]=null;
		}
	}

	public void draw() {
		for(int j = 0; j < i; j++) {
			System.out.println(shape[j]);
		}
	}
}

public class GraphicEditor64 {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		Editor e = new Editor();
		boolean b=true;
		
		while(b=true){
			System.out.print("삽입(1), 삭제(2), 모두 보기(3), 종료(4)>>");
			int num=sc.nextInt();
			switch(num) {
			case 1:
				e.insert();
				break;
			case 2:
				e.delete();
				break;
			
			case 3:
				e.draw();
				break;
			case 4:
				System.out.println("프로그램을 종료합니다...");
				b=false;
				break;
			}
		}
	}
}