# 문제
 
n choose m의 끝자리 0의 개수를 출력하는 프로그램을 작성하시오.

# 입력
첫째 줄에 정수 n, m (0 <= m <= n <= 2,000,000,000$, n != 0)이 들어온다.

# 출력
첫째 줄에 
n choose m의 끝자리 0의 개수를 출력한다.

# 예제 입력 1 
25 12

# 예제 출력 1 
2
 
# 출처 
https://www.acmicpc.net/problem/2004

# 풀이
1676번(n!에서 0의 개수 구하기)를 응용하여 n!/(m!(n-m)!)에서 n!, m!, (n-m)!에서 2와 5의 개수를 각각 구해서
(n!의 개수) - (m!의 개수) - ((n-m)!의 개수) 중 가장 작은 수를 출력한다.

# 날짜
22/10/11
