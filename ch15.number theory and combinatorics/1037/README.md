# 1037

# 문제
양수 A가 N의 진짜 약수가 되려면, N이 A의 배수이고, A가 1과 N이 아니어야 한다. 어떤 수 N의 진짜 약수가 모두 주어질 때, N을 구하는 프로그램을 작성하시오.

# 입력
첫째 줄에 N의 진짜 약수의 개수가 주어진다. 이 개수는 50보다 작거나 같은 자연수이다. 둘째 줄에는 N의 진짜 약수가 주어진다. 1,000,000보다 작거나 같고, 2보다 크거나 같은 자연수이고, 중복되지 않는다.

# 출력
첫째 줄에 N을 출력한다. N은 항상 32비트 부호있는 정수로 표현할 수 있다.

# 예제 입력 1 
2  
4 2  

# 예제 출력 1 
8

# 예제 입력 2 
1  
2  

# 예제 출력 2 
4

# 예제 입력 3 
6  
3 4 2 12 6 8  

# 예제 출력 3 
24

# 예제 입력 4 
14  
14 26456 2 28 13228 3307 7 23149 8 6614 46298 56 4 92596  

# 예제 출력 4 
185192
 
# 출처 
https://www.acmicpc.net/problem/1086

# 풀이
약수가 1개인 경우 해당 약수를 제곱해서 출력하고,  
아닌 경우 약수들을 정렬하여 가장 작은 값과 가장 큰 값을 곱하여 출력한다.

# 날짜
22/09/23
