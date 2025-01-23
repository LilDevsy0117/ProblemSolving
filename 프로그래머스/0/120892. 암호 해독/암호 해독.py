def solution(cipher, code):
    answer = ''
    return cipher[code-1::code]