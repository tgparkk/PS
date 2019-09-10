package kakao;

public class Solution7 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		System.out.println(solution(new String[]{"2016-09-15 20:59:57.421 0.351s"
                , "2016-09-15 20:59:58.233 1.181s", "2016-09-15 20:59:58.299 0.8s"
                , "2016-09-15 20:59:58.688 1.041s", "2016-09-15 20:59:59.591 1.412s"
                , "2016-09-15 21:00:00.464 1.466s", "2016-09-15 21:00:00.741 1.581s"
                , "2016-09-15 21:00:00.748 2.31s", "2016-09-15 21:00:00.966 0.381s"
                , "2016-09-15 21:00:02.066 2.62s"}));
	}
	public static int solution(String[] lines) {
		long[][]map=new long[lines.length][3];//0:시작 1:종료 2:경과
		
		for(int i=0;i<lines.length;i++) {
			String s=lines[i];
			
			int hour,minute,second;
			String[]tempLog=s.split(" ");
			String[]tempTime=tempLog[1].split(":");
			
			hour=Integer.parseInt(tempTime[0])*1000;
			minute=Integer.parseInt(tempTime[1])*1000;
			second=(int)(Double.parseDouble(tempTime[2])*1000.0);
			
			int start=(hour*60*60)+(minute*60)+second
					-(int)(Double.parseDouble(tempLog[2].replace("s",""))*1000.0)+1;
			int end=(hour*60*60)+(minute*60)+second;
			int proc=(int)(Double.parseDouble(tempLog[2].replace("s",""))*1000.0)+1;
			
			map[i][0]=start;
			map[i][1]=end;
			map[i][2]=proc;
		}
		System.out.println(lines.length);
		int answer = 0;		
		for(int i=0;i<lines.length;i++) {
			int startCnt=0;
			int endCnt=0;
			for(int j=0;j<lines.length;j++) {
				if(map[i][0]<=map[j][1] && map[i][0]+999 >= map[j][0]) {
					startCnt++;
				}
				if(map[i][1]<=map[j][1] && map[i][1]+999 >= map[j][0]) {
					endCnt++;
				}
			}
			answer=startCnt > answer ? startCnt:answer;
			answer=endCnt > answer ? endCnt:answer;
		}
		return answer;
	  }
}
