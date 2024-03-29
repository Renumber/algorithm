# 10986

# 문제
수 N개 A1, A2, ..., AN이 주어진다. 이때, 연속된 부분 구간의 합이 M으로 나누어 떨어지는 구간의 개수를 구하는 프로그램을 작성하시오.

즉, Ai + ... + Aj (i ≤ j) 의 합이 M으로 나누어 떨어지는 (i, j) 쌍의 개수를 구해야 한다.

# 입력
첫째 줄에 N과 M이 주어진다. (1 ≤ N ≤ 106, 2 ≤ M ≤ 103)

둘째 줄에 N개의 수 A1, A2, ..., AN이 주어진다. (0 ≤ Ai ≤ 109)

# 출력
첫째 줄에 연속된 부분 구간의 합이 M으로 나누어 떨어지는 구간의 개수를 출력한다.

# 예제 입력 1 
5 3  
1 2 3 1 2  

# 예제 출력 1 
7
  
# 풀이
맨처음에는 누적합배열sum(m으로 나눠 떨어지는 숫자를 구해야 하므로 편의상 m으로 나눈 값을 저장)을 만들어두고 n*n번 for문을 통해 모든 경우의 수를 계산하려 했지만 역시나 시간초과.  
찾아야 하는 값은 (sum[j] - sum[i]) % m == 0이 되는 값인데, sum의 값은 항상 m보다 작으므로, sum[j] == sum[i]인 값을 찾으면 된다.  
따라서 cnt[m]을 만들어 sum값들을 카운트 하고 해당 값들로 몇개의 조합이 나오는지 카운트 하고, res에 값들을 추가하고, cnt[0]은 그 자체로 조건을 만족하기 때문에 이것도 추가로 더해준다.  

추가로 sum을 배열이 아닌 변수로 저장해도 풀이에 큰 문제가 없고, 변수로 저장하는 편이 메모리를 더 적게 소모한다. (백준 기준 배열로 저장하면 9840KB, 변수로 저장하면 2028KB)


# 출처 
https://www.acmicpc.net/problem/10986

# 날짜
22/11/17