# 3009

# 문제
세 점이 주어졌을 때, 축에 평행한 직사각형을 만들기 위해서 필요한 네 번째 점을 찾는 프로그램을 작성하시오.

# 입력
세 점의 좌표가 한 줄에 하나씩 주어진다. 좌표는 1보다 크거나 같고, 1000보다 작거나 같은 정수이다.

# 출력
직사각형의 네 번째 점의 좌표를 출력한다.

# 예제 입력 1 
5 5  
5 7  
7 5  

# 예제 출력 1 
7 7

# 예제 입력 2 
30 20  
10 10  
10 20  

# 예제 출력 2 
30 10
 
# 출처 
https://www.acmicpc.net/problem/3009

# 풀이
x, y 좌표 각각 같은 값이 있다면 해당 x, y값은 네 번째 좌표가 될 수 없기 때문에 두 좌표의 x값을 비교해서 같으면 다른 좌표의 x값을 출력하고, y도 똑같이 진행한다.

# 날짜
22/09/16