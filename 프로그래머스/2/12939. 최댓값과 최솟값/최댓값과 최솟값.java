class Solution {
    public String solution(String s) {
        String answer = "";
        
        String[] s_list = s.split(" ");
        
        Integer min = Integer.parseInt(s_list[0]);
        Integer max = Integer.parseInt(s_list[0]);
        
        for(String c : s_list){
            Integer num = Integer.parseInt(c);
            if(num > max){
                max = num;
            }
            if (num<min){
                min = num; 
            }
        }
        answer = "" + min + " " + max; 
        
        return answer;
    }
}