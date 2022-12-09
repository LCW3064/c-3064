public class NestedLoop64 {
	public static void main(String[] args) {
		
		int startDan = 2; 		// 시작 단
		int endDan = 9;		// 끝 단 
		int danPerLine = 2;	// 한 줄에  출력할 단 수
		int maxGudan = 9;		// 계산할 구단수
		
		for (int dadan = startDan; dadan <= endDan; dadan += danPerLine) {
			for (int gudan = 1; gudan <= maxGudan; gudan++) {
				int currentDanMax = dadan + (danPerLine - 1);
				for (int danline = dadan;
						danline <= ((currentDanMax <= endDan) ? currentDanMax : endDan);
						danline++) {
					System.out.print(danline + " * " + gudan + " = " + (danline * gudan) + "\t");
				}
				System.out.println();
				}
			System.out.println();
		}
	}
}