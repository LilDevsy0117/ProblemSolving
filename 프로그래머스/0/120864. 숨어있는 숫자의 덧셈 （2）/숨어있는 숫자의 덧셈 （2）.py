def solution(my_string):
    answer = 0
    temp = ""
    for i in my_string:
        if i.isdigit():
            temp += i;
        else:
            temp += ' ';
            
    temp = temp.split()
    
    for i in temp:
        answer += int(i)
    
    return answer