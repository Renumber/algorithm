# 10951

# 문제
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

# 입력
입력은 여러 개의 테스트 케이스로 이루어져 있다.

각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

# 출력
각 테스트 케이스마다 A+B를 출력한다.

# 예제 입력 1 
1 1  
2 3  
3 4  
9 8  
5 2  

# 예제 출력 1 
2  
5  
7  
17  
7  

# 풀이
반복 횟수가 주어지지 않기 때문에 EOF을 이용하여 프로그램을 종료해야 한다.
cin을 조건문 안에 넣어서 cin에 EOF가 들어왔을 경우 그 값이 false가 되어 while이 종료된다.

# 출처
https://www.acmicpc.net/problem/10951

# 날짜
22/07/14
