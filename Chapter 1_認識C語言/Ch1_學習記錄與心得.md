# Ch1 學習紀錄
#### 作者: andypon
#### 更新日期: 2025/04/15  

> 寫作緣起   

這邊初學C語言在下載IDE就遇到好多問題啦~~
原本作者推薦的DEV C++ 在RUN程式碼的時候都一直噴錯(我的作業系統windows10)

最後輾轉使用Benny 大大推薦的Embacadero 在2020維護的"DEV C++"  
載點: https://github.com/Embarcadero/Dev-Cpp  Releases 裡的這個檔  
***Embarcadero_Dev-Cpp_6.3_TDM-GCC_9.2_Setup.exe***

邊學習來邊整理一下我自學對照教科書Ch1 及appendix A遇到的問題，希望可以幫助跟我一樣自學的後人
若操作上有一樣的困擾能減少摸索的時間嗚嗚

> Dev C++ (Embacadero) 問與答
- Q1: 系統選繁體中文會出現亂碼?
  - ans: 目前無解，我乖乖地用英文版嗚嗚

- Q2: 遇到CODE輸入中文註解但只有反白才看的到該文字?
  - ans: Tools > Editor Options > Fonts > 『不要勾選』<ID 27071 transalation missing>

- Q3: 執行完程式中文都是亂碼?
  - ans: 我參考網路上作法加入了這兩行程式碼  
***#pragma execution_character_set("utf-8")***  
***system("chcp 65001 > nul");  // 切換 console 編碼為 UTF-8***  
詳細加入位置可參考hw1-13

- Q4: 書上說可以建立程式模板，但Embacadero版的位置似乎不太一樣?
  - ans: Tools > Editor Options > Snippets > Default Source

- Q5: 我在輸入CODE時，因為我有更換theme底色呈黑色，結果現在current line都會把code顏色吃掉?
  ~~(aka其實就是 如何更換CURRENT LINE顏色拉)~~
  - ans: Tools > Editor Options > Genaral > Highlight Current Line 進行調整 
