# [Gold V] Birthday Boy - 16305 

[문제 링크](https://www.acmicpc.net/problem/16305) 

### 성능 요약

메모리: 2028 KB, 시간: 0 ms

### 분류

애드 혹, 구현, 파싱, 정렬, 문자열

### 제출 일자

2024년 9월 15일 13:48:53

### 문제 설명

<p>Bobby has just joined a new company, and human resources has asked him to note his birthday on the office calendar. Bobby the Birthday Boy wants to feel special! Also, Bobby the Birthday Boy does not mind lying for attention.</p>

<p>He notices that the longer people have not celebrated a birthday or eaten cake, the more they like it when a new one comes around. So he wants to pick his birthday in such a way that the longest period of time without a birthday possible has just passed. Of course he does not want to share his birthday with any colleague, either.</p>

<p>Can you help him make up a fake birthday to make him feel as special as possible? Bobby does not care about leap years: you can assume every year is not a leap year, and that no one has a birthday on the 29th of February. In case of a tie, Bobby decides to fill in the date that is soonest (strictly) after the current date, the 27th of October, because that means he will get to celebrate his birthday as soon as possible.</p>

<p style="text-align: center;"><img alt="" src="https://upload.acmicpc.net/91307262-d5d8-4353-9685-04b5216754f4/-/preview/" style="width: 510px; height: 355px;"></p>

<p style="text-align: center;">Figure 1: Sample case 2. Calendar is from <a href="http://printablecalendarholidays.com">http://printablecalendarholidays.com</a>.</p>

### 입력 

 <ul>
	<li>One line with a number 1 ≤ n ≤ 100, the number of colleagues Bobby has in his new office.</li>
	<li>Then follow n lines, each line corresponding to one coworker. Each line gives the name of the colleague (using at most 20 upper or lower case letters) separated from their birthday date by a space. The date is in format mm-dd.</li>
</ul>

### 출력 

 <p>Print the fake birthday date (format: mm-dd) chosen by Bobby.</p>

