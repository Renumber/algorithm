# 25682

# 문제
지민이는 자신의 저택에서 MN개의 단위 정사각형으로 나누어져 있는 M×N 크기의 보드를 찾았다. 어떤 정사각형은 검은색으로 칠해져 있고, 나머지는 흰색으로 칠해져 있다. 지민이는 이 보드를 잘라서 K×K 크기의 체스판으로 만들려고 한다.

체스판은 검은색과 흰색이 번갈아서 칠해져 있어야 한다. 구체적으로, 각 칸이 검은색과 흰색 중 하나로 색칠되어 있고, 변을 공유하는 두 개의 사각형은 다른 색으로 칠해져 있어야 한다. 따라서 이 정의를 따르면 체스판을 색칠하는 경우는 두 가지뿐이다. 하나는 맨 왼쪽 위 칸이 흰색인 경우, 하나는 검은색인 경우이다.

보드가 체스판처럼 칠해져 있다는 보장이 없어서, 지민이는 K×K 크기의 체스판으로 잘라낸 후에 몇 개의 정사각형을 다시 칠해야겠다고 생각했다. 당연히 K×K 크기는 아무데서나 골라도 된다. 지민이가 다시 칠해야 하는 정사각형의 최소 개수를 구하는 프로그램을 작성하시오.

# 입력
첫째 줄에 정수 N, M, K가 주어진다. 둘째 줄부터 N개의 줄에는 보드의 각 행의 상태가 주어진다. B는 검은색이며, W는 흰색이다.

# 출력
첫째 줄에 지민이가 잘라낸 K×K 보드를 체스판으로 만들기 위해 다시 칠해야 하는 정사각형 개수의 최솟값을 출력한다.

# 제한
1 ≤ N, M ≤ 2000  
1 ≤ K ≤ min(N, M)  

# 예제 입력 1 
4 4 3  
BBBB  
BBBB  
BBBW  
BBWB  

# 예제 출력 1 
2

# 예제 입력 2 
8 8 8  
WBWBWBWB  
BWBWBWBW  
WBWBWBWB  
BWBBBWBW  
WBWBWBWB  
BWBWBWBW  
WBWBWBWB  
BWBWBWBW  

# 예제 출력 2   
1

# 예제 입력 3 
10 13 10  
BBBBBBBBWBWBW  
BBBBBBBBBWBWB  
BBBBBBBBWBWBW  
BBBBBBBBBWBWB  
BBBBBBBBWBWBW  
BBBBBBBBBWBWB  
BBBBBBBBWBWBW  
BBBBBBBBBWBWB  
WWWWWWWWWWBWB  
WWWWWWWWWWBWB  

# 예제 출력 3 
30

# 예제 입력 4 
9 23 9  
BBBBBBBBBBBBBBBBBBBBBBB  
BBBBBBBBBBBBBBBBBBBBBBB  
BBBBBBBBBBBBBBBBBBBBBBB  
BBBBBBBBBBBBBBBBBBBBBBB  
BBBBBBBBBBBBBBBBBBBBBBB  
BBBBBBBBBBBBBBBBBBBBBBB  
BBBBBBBBBBBBBBBBBBBBBBB  
BBBBBBBBBBBBBBBBBBBBBBB  
BBBBBBBBBBBBBBBWWWWWWWW  

# 예제 출력 4 
40

# 풀이
최대 2000*2000이기 때문에 모든 경우를 순회하면 시간초과가 발생함  
맨처음에는 11660번 처럼 1차원 배열에 누적합을 저장하는 방식으로 했으나, 그래도 3중 for문이 돌아가기 때문에 시간초과.  
찾아보니 2차원 누적합 배열이라는 것이 있었고 이를 활용함,   
체스판에서 i,j값의 합이 짝수인 경우는 좌상단과 같은 색상이고 홀수인 경우에는 다른 색상이고 이를 입력값과 비교하여 val값에 1(칠해야 한다), 0(칠하지 않아도 된다)로 저장한다.
sum[i][j]는 i,j번째까지 체스판에서 몇개를 칠해야 하는지를 의미하고, 그 식은 다음과 같다.  
```
sum[i][j] = sum[i][j - 1] + sum[i - 1][j] - sum[i - 1][j - 1] + val;  
```  
그런다음 범위만큼의 sum값을 구하고 가장 작은 값을 리턴한다.
```
for (int i = k; i <= n; i++) {
    for (int j = k; j <= m; j++) {
        val = sum[i][j] - sum[i - k][j] - sum[i][j - k] + sum[i - k][j - k];
        res = min(val, res);
    }
}
```  
이 코드를 시작 색이 B인 경우, W인 경우 두개로 나눠서 그 중 작은 값을 출력한다.

# 출처 
https://www.acmicpc.net/problem/25682

# 날짜
22/11/22