def isPrime(n):
  for i in range(2,n):
    if n%i==0: return False
  return True
BOUND = 300000
ans = 0 
for i in range(2,BOUND):
  if isPrime(i):
    print(i,end=' ')
    ans+=i
print()
print('質數有:',ans,'個')