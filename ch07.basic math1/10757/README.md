# 10757

# 문제
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

# 입력
첫째 줄에 A와 B가 주어진다. (0 < A,B < 1010000)

# 출력
첫째 줄에 A+B를 출력한다.

# 예제 입력 1 
9223372036854775807 9223372036854775808  

# 예제 출력 1 
18446744073709551615

# 출처
https://www.acmicpc.net/problem/10757

# 풀이
string을 이용하여 두 수(a, b)를 입력 받은 다음 뒤에서부터 하나씩 꺼내서  
각각 num1, num2에 할당 한 다음  
sum = num1 + num2 + carry(이전 연산에서 올림이 발생할 경우 1 아니면 0)을 계산  
sum이 10보다 크거나 같을 경우(올림이 발생할 경우) sum -= 10을 하고 carry를 1로 초기화 한다.
sum이 10보다 작을 경우(올림이 발생하지 않은 경우) carry를 0으로 초기화 한다.
a, b둘중에 하나가 공백이 되는 경우 따로 back(), pop_back()을 실행하지 않고 num을 0으로 초기화 한다.

# 날짜
22/08/05
