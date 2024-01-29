def solution(s):
    answer = []
    s = s.split(" ")
    for value in s:
        if value == "":
            print(value)
            answer.append(value)
        elif value[0].isalpha() == False:
            value = value.lower()
            answer.append(value)
        else:
            if value == " ":
                answer.append(value)
            else:
                value = value.lower()
                value = value.capitalize()
                answer.append(value)

    return " ".join(answer)