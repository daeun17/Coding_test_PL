import java.util.*;

public class Solution {
    public int[] solution(int[] arr) {
        // 결과를 저장할 리스트 생성
        ArrayList<Integer> resultList = new ArrayList<>();
        
        // 배열이 비어있는 경우 바로 빈 배열 반환
        if (arr.length == 0) {
            return new int[0];
        }
        
        // 첫 번째 원소는 무조건 추가
        resultList.add(arr[0]);
        
        // 두 번째 원소부터 순회하며 중복 제거
        for (int i = 1; i < arr.length; i++) {
            if (arr[i] != arr[i - 1]) {
                resultList.add(arr[i]);
            }
        }
        
        // ArrayList를 배열로 변환하여 반환
        int[] resultArray = new int[resultList.size()];
        for (int i = 0; i < resultList.size(); i++) {
            resultArray[i] = resultList.get(i);
        }
        
        return resultArray;
    }
}