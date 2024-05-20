class Solution {
    boolean solution(String s) {
        boolean answer = true;
        int num1 = 0; 
        
        for (int i = 0 ; i < s.length() ; i++ ){
            if(s.charAt(0)  == ')' || s.charAt(s.length() - 1) == '(') {
                answer = false;
                break;
            }
            if(num1 == 0){
                if(s.charAt(i) == ')'){
                    answer = false;
                    break;
                }
            }
            if(s.charAt(i) == '('){
                num1 += 1; 
            }
            if(s.charAt(i)  == ')'){
                num1 -= 1; 
            }
        }
        
        if (num1 == 0 && answer == true){
            answer = true;
        }else{
            answer = false;
        }
        return answer;
    }
}