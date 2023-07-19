def solution(n):
    answer = 0
    three_arr = []
    while(n != 0):
        three_arr.append(n % 3)
        n = n //3 
    three_arr = three_arr[::-1]
    
    for i in range(0,len(three_arr),1):
        if i == 0:
            answer += three_arr[i]
        elif three_arr[i] != 0:
            answer += three_arr[i] * (3**i)    
    return answer