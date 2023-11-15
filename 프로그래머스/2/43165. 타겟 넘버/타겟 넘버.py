
def solution(numbers, target):
    answer = 0
    i = 0
    answer1 = sum_number(numbers, target - numbers[i], i, len(numbers), answer)
    answer2 = sum_number(numbers, target + numbers[i], i, len(numbers), answer)
    # print(answer1 , answer2)
    return answer1 + answer2

def sum_number (numbers, target, i, end, answer) :
    
    # print(numbers[i], i, target,answer)
    if i == end - 1:
        # print("end")
        if target == 0 : 
            answer += 1
            # print(answer)
        return answer
        
    answer = sum_number(numbers, target - numbers[i+1], i+1, end, answer)
    answer = sum_number(numbers, target + numbers[i+1], i+1, end, answer)
    return answer 
