class Solution {
    public int solution(int[] numbers, int target) {
        int answer = 0;
        answer = rop(numbers,0,target, answer);
        return answer;
    }
    
    public int rop(int[] numbers, int index, int target, int answer){
        
        if(index >= numbers.length){
            if(target == 0){
                answer += 1; 
            }
            return answer; 
            
        }
        
        answer = rop(numbers , index+1 , target-numbers[index], answer);
        answer = rop(numbers, index+1, target+numbers[index],answer);
        
        return answer; 
        
    }
}