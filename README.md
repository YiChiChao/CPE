# CPE

## 10041
![](https://i.imgur.com/qaoUQq4.png)

解法：
將input排列，再取其中位數作為Optimal Vito's house。
將各個relative與Vito相減取絕對值，其總和則為答案。

## 10055
![](https://i.imgur.com/3Eu5RgQ.png)
注意： long long int

## 100
![](https://i.imgur.com/nymGf31.png)
* 題目描述：要找到在某個區間內其cycle-length最大的值。
* 解法：只有2的次方可以從1去推算其cycle-length，所以先找到target會經過的cycle-length就能有效減少算cycle的次數
* 小細節：input a, b 會有大小交換的問題，且output中的input不能交換位置。

## 10101
![](https://i.imgur.com/cLln0jV.png)
**格式好討厭**
* 題目描述：將某個數字用題目的進位表示法表示出來
* 解法：
  * 因為數字可能會大於最大進位(kuti)，所以在判別kuti的時候，可以用遞迴的方式把大於kuti的部分先做完。
  * 空格就是確保更小的位數是非零的時候才能夠有空格
* 注意：到底是要用char或是用long long int去存一個很大的數字要判別好。( long long int 是 9 * 10^18)

## 10420
![](https://i.imgur.com/LzGXXqE.png)
*  解法：cpp STL map 
