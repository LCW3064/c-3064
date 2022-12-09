public class Book64 {
	String title;
	String author;
	
	void show() {System.out.println(title + " " + author); }
	
	public Book64() {
		this("", "");
		System.out.println("생성자 호출됨");
	}
	
	public Book64(String title) {
		this(title, "작자미상");
	}
	
	public Book64(String title, String author) {
		this.title = title;
		this.author = author;
	}
	
	public static void main(String [] args) {
		Book64 littlePrince = new Book64("어린왕자", "생텍쥐페리");
		Book64 loveStory = new Book64("춘향전");
		Book64 emptyBook = new Book64();
		loveStory.show();
	}
}
