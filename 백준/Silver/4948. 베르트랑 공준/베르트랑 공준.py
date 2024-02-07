num = 123456 *2 +1
array = [1] * num
for i in range(2,int(num**0.5)):
  if array[i]:
    j = 2
    while i*j < num:
      array[i*j] = 0
      j += 1

while True:
  n = int(input())
  if n == 0:
    break
  prime_cnt = 0
  for i in range(n+1, 2*n+1):
    prime_cnt += array[i]
  print(prime_cnt)