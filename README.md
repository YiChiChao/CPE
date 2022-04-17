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

