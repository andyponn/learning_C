# Ch3 學習紀錄
#### 作者: andypon
#### 更新日期: 2025/04/18  

> 章節重點   

- 基本資料型態
  - char(字元)
    - 1位元組: 0到255(265個字元)
  - int(整數)
    - 4位元組: -2147483648到2147483647
  - long int(長整數)
    - 4位元組: -2147483648到2147483647
  - short int(短整數)
    - 2位元組: -32768到32767
  - float(浮點數)
    - 4位元組: 1.2e-38到3.4e38
  - double(倍精度浮點數)
    - 8位元組: 2.2e-308到1.8e308
  

- 無號整數資料型態
  - unsigned int(整數)
    - 4位元組: 0到4294967295
  - unsigned long int(長整數)
    - 4位元組: 0到4294967295
  - unsigned int(短整數)
    - 2位元組: 0到65535
   
- 溢位的產生
  - 見prog3_2, 回從最小值開始
 
-ASCII碼
  -電腦的內碼，每個碼由1位元組儲存
  -數字0-255中，較高位元(128-255)未被使用到
  -將大於255的整數以字元格式碼【%c】印出時，只會擷取後面1位元組的資料，見prog3_6

-跳脫字元及跳脫序列
  - \n 跳一行
  - \a alarm
  - \t tab

-浮點數
  - 5.12F: 有沒有F差異在與 視為 浮點數常數或倍精度浮點數
  - 印出的格式都是以%f; 倘若想以指數形式 則可以 %e
  - float 7-8位精度; doble 15-16位精度
  - 小技巧: %16.12f 16個字元欄寬，其中小數點後位數為12

-關於資料
  - sizeof 查詢變數/常數佔了多少位元組
  - (欲轉換資料型態) 變數名稱
    - 在做除法時，若直接將整數相除可能不是我們要的結果，記得在運算時可轉換資料型態至float，並可以%f讀出

> C 章節問與答
- Q1: ?
  - ans: 

- Q2: ?
  - ans: 

