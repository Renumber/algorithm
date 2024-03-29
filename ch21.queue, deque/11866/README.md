# 11866

# 문제
요세푸스 문제는 다음과 같다.

1번부터 N번까지 N명의 사람이 원을 이루면서 앉아있고, 양의 정수 K(≤ N)가 주어진다. 이제 순서대로 K번째 사람을 제거한다. 한 사람이 제거되면 남은 사람들로 이루어진 원을 따라 이 과정을 계속해 나간다. 이 과정은 N명의 사람이 모두 제거될 때까지 계속된다. 원에서 사람들이 제거되는 순서를 (N, K)-요세푸스 순열이라고 한다. 예를 들어 (7, 3)-요세푸스 순열은 <3, 6, 2, 7, 5, 1, 4>이다.

N과 K가 주어지면 (N, K)-요세푸스 순열을 구하는 프로그램을 작성하시오.

# 입력
첫째 줄에 N과 K가 빈 칸을 사이에 두고 순서대로 주어진다. (1 ≤ K ≤ N ≤ 1,000)

# 출력
예제와 같이 요세푸스 순열을 출력한다.

# 예제 입력 1 
7 3

# 예제 출력 1 
<3, 6, 2, 7, 5, 1, 4>
  
# 풀이
원형큐와 비슷하게 만들어 구현한다.
1. 1부터 n까지의 수를 넣은 큐를 만든다.
2. 한 개씩 꺼내며 cnt를 증가 시킨다.
3. cnt가 k와 같아지면 cnt를 0으로 초기화 시키고 해당 수를 따로 저장한다.
4. cnt가 k와 같지 않다면 해당 수를 다시 큐에 push한다. 
5. 따로 저장한 수를 출력한다.
 
# 출처 
https://www.acmicpc.net/problem/11866

# 날짜
22/12/16