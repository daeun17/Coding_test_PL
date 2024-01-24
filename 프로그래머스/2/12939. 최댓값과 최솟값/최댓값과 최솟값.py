def solution(s):
    answer = ''
    s_list = s.split()
    
    min = int(s_list[0])
    max = int(s_list[0])
    for i in s_list :
        if min > int(i):
            min = int(i)
        if max < int(i):
            max = int(i)
    print(min, max)
    
    answer = str(min) + " " + str(max)
        
    return answer