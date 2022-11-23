# 11053

# 문제
수열 S가 어떤 수 Sk를 기준으로 S1 < S2 < ... Sk-1 < Sk > Sk+1 > ... SN-1 > SN을 만족한다면, 그 수열을 바이토닉 수열이라고 한다.

예를 들어, {10, 20, 30, 25, 20}과 {10, 20, 30, 40}, {50, 40, 25, 10} 은 바이토닉 수열이지만,  {1, 2, 3, 2, 1, 2, 3, 2, 1}과 {10, 20, 30, 40, 20, 30} 은 바이토닉 수열이 아니다.

수열 A가 주어졌을 때, 그 수열의 부분 수열 중 바이토닉 수열이면서 가장 긴 수열의 길이를 구하는 프로그램을 작성하시오.

# 입력
첫째 줄에 수열 A의 크기 N이 주어지고, 둘째 줄에는 수열 A를 이루고 있는 Ai가 주어진다. (1 ≤ N ≤ 1,000, 1 ≤ Ai ≤ 1,000)

# 출력
첫째 줄에 수열 A의 부분 수열 중에서 가장 긴 바이토닉 수열의 길이를 출력한다.

# 예제 입력 1 
10  
1 5 2 1 4 3 4 5 2 1

# 예제 출력 1 
7

# 풀이
전반적인 흐름은 11053번과 비슷  
arr[i]는 i번째 수열의 값, asc[i]는 arr[i]가 포함 될 수 있는 가장 큰 오름차순 수열의 길이,  desc[i]는 arr[i]가 포함 될 수 있는 가장 큰 바이토닉 수열 or 내림차순 수열의 길이다.  
arr[i]보다 arr[j]가 클 경우에는 asc[j]와 desc[j]중에 큰 값을 선택하여 저장해야 한다. 코드로 표현하면 다음과 같다.  
```
for (int i = 1; i < n; i++) {
    asc[i] = 1;
    desc[i] = 1;
    for (int j = 0; j < i; j++) {
        if (arr[i] > arr[j]) {
            asc[i] = max(asc[i], asc[j] + 1);
        }
        if (arr[i] < arr[j]) {
            desc[i] = max(desc[i], max(desc[j], asc[j]) + 1);
        }
    }
    maxRes = max(maxRes, max(asc[i], desc[i]));
}
```
  
# 출처 
https://www.acmicpc.net/problem/11054

# 날짜
22/11/07