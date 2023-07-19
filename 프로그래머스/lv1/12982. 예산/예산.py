def solution(d, budget):
    answer = 0
    d = sorted(d)
    for i in range(0,len(d),1):
        if budget < d[i]:
            break
        else:
            budget -= d[i]
        answer = i + 1
    return answer