def solution(s):
    answer = []
    zero_i = 0
    time = 0
    
    while (s != "1"):
        len_s = len(s)
        s = s.replace("0","")
        zero_i += len_s - len(s)
        time += 1
        s = bin(len(s))[2:]
    answer = [time, zero_i]     
    return answer