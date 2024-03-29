# 11051

# 문제
자연수 N과 정수 K가 주어졌을 때 이항 계수 
nCk를 10007로 나눈 나머지를 구하는 프로그램을 작성하시오.

# 입력
첫째 줄에 N과 K가 주어진다. (1 ≤ N ≤ 1,000, 0 ≤ K ≤ N)

# 출력
nCk를 10007로 나눈 나머지를 출력한다.

# 예제 입력 1 
5 2

# 예제 출력 1 
10
 
# 출처 
https://www.acmicpc.net/problem/11050

# 풀이
11050과 같이 그냥 팩토리얼을 이용하여 계산하면 시간초과가 발생하기 때문에 파스칼 삼각형과, 동적 계획법(Dynamic programming)을 이용하여 해결해야 한다.  

arr[1][0]과 arr[1][1]을 1로 초기화 해주고
arr[n][k]까지 다음식을 이용하여 계산하면 된다.  
arr[i][j] = arr[i - 1][j - 1] % 10007 + arr[i - 1][j] % 10007;

# 날짜
22/09/30
