# 当代量化交易系统的原理与实现 课程大作业

# 一个data-driven的回测系统



## 编译环境

macOS Ventura 13.0.1

Apple clang version 14.0.0 (clang-1400.0.29.202)



Homebrew安装了TA-Lib



## 相关说明

`main`函数中`backTesting`函数是关键函数

自定义初始资金与交易标的，数据支持单CSV（格式：`Timestamp,Open,High,Low,Close,Adj Close,Volume,Symbol`，要求不同标的数据保持时间戳的一致性）

在`defnition.h`定义手续费率`commissionRate`与时间尺度`peroid`，即1年包含多少个数据相邻项的差，示例中数据为天级，一年包含365天

可根据`Strategy`类派生自己的策略



## 示例运行结果

```
----------BackTest started----------

[strategy] 0: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 0: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 0: FILL at 1513008000 LONG 1 Apple

[strategy] 0: FILL at 1513008000 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1514908800 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1514995200 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1515081600 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1515340800 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1515600000 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1515686400 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1516032000 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1516118400 LONG 1 Apple

[strategy] 1: FILL at 1516118400 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1516204800 LONG 1 Apple

[strategy] 1: FILL at 1516204800 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1516291200 LONG 1 Apple

[strategy] 1: FILL at 1516291200 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1516550400 LONG 1 Apple

[strategy] 1: FILL at 1516550400 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1516636800 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1516723200 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1516809600 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1516896000 LONG 0.679432 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1517155200 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1517241600 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1517328000 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1517414400 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1517500800 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1517760000 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1517846400 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1517932800 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1518019200 SHORT 1 Apple

[strategy] 1: FILL at 1518019200 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1518105600 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1519574400 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1519660800 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1519747200 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1519833600 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1519920000 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1520179200 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1520265600 LONG 0.51996 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1520784000 LONG 8.18242e-17 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1521734400 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1522166400 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1522252800 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1522598400 SHORT 1 Apple

[strategy] 1: FILL at 1522598400 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1522684800 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1522771200 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1522857600 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1522944000 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1523980800 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1525881600 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1525968000 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1526227200 LONG 1 Apple

[strategy] 1: FILL at 1526227200 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1526313600 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1526400000 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1526486400 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1526572800 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1526832000 LONG 0.484709 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1526918400 LONG 7.91407e-17 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1527004800 LONG 1.57116e-19 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1528128000 LONG 3.0588e-22 Apple

[strategy] 1: FILL at 1528128000 LONG 4.96785e-25 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1528214400 LONG 1.21686e-27 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1528300800 LONG 2.43782e-30 Apple

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1528732800 LONG 3.96356e-33 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1528905600 LONG 7.83123e-36 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1528992000 LONG 1.56449e-38 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1529251200 LONG 3.06938e-41 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1529337600 LONG 6.16099e-44 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1529424000 LONG 1.22909e-46 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1529596800 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1529856000 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1529942400 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1530028800 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1531756800 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1531843200 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1531929600 LONG 0.946847 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1532016000 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1532275200 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1532361600 LONG 0 Apple

[strategy] 1: FILL at 1532361600 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1532448000 LONG 0 Apple

[strategy] 1: FILL at 1532448000 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1532534400 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1532620800 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1533052800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1533139200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1533225600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1533484800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1533571200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1533657600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1533744000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1533830400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1534089600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1534176000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1534262400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1534348800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1534435200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1534694400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1534780800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1534867200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1534953600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1535040000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1535299200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1535385600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1535472000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1535558400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1535644800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1535990400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1536076800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1537113600 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1537200000 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1537286400 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1539100800 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1539187200 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1539532800 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1539792000 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1540310400 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1542124800 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1542643200 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1542729600 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1542902400 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1543161600 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1543248000 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1543334400 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1543420800 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1543507200 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1544371200 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1545148800 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1545235200 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1545321600 SHORT 1 Apple

[strategy] 1: FILL at 1545321600 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1545580800 SHORT 1 Apple

[strategy] 1: FILL at 1545580800 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1546444800 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1547481600 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1548950400 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1549209600 LONG 1 Apple

[strategy] 1: FILL at 1549209600 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1549296000 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1549382400 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1549468800 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1549814400 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1549900800 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1549987200 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1550073600 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1550160000 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1550505600 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1550592000 LONG 1 Apple

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1551369600 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1551628800 LONG 1 Apple

[strategy] 1: FILL at 1551628800 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1552233600 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1552320000 LONG 1 Apple

[strategy] 1: FILL at 1552320000 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1552406400 LONG 1 Apple

[strategy] 1: FILL at 1552406400 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1552492800 LONG 1 Apple

[strategy] 1: FILL at 1552492800 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1552579200 LONG 0.349634 Apple

[strategy] 1: FILL at 1552579200 LONG 2.99644e-17 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1552838400 LONG 7.78185e-20 Apple

[strategy] 1: FILL at 1552838400 LONG 1.19638e-22 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1552924800 LONG 3.13134e-25 Apple

[strategy] 1: FILL at 1552924800 LONG 4.71786e-28 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1553011200 LONG 1.23921e-30 Apple

[strategy] 1: FILL at 1553011200 LONG 1.84472e-33 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1553097600 LONG 4.7712e-36 Apple

[strategy] 1: FILL at 1553097600 LONG 7.31889e-39 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1553184000 LONG 1.94495e-41 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1553616000 LONG 3.9392e-44 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1553702400 LONG 7.8601e-47 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1554652800 LONG 1.48114e-49 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1554998400 LONG 2.97762e-52 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1555257600 LONG 5.93853e-55 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1555344000 LONG 1.1864e-57 Apple

[strategy] 1: FILL at 1555344000 LONG 1.86539e-60 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1555430400 LONG 4.64566e-63 Apple

[strategy] 1: FILL at 1555430400 LONG 7.3912e-66 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1555516800 LONG 1.84791e-68 Apple

[strategy] 1: FILL at 1555516800 LONG 2.9505e-71 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1555862400 LONG 7.35273e-74 Apple

[strategy] 1: FILL at 1555862400 LONG 1.16608e-76 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1555948800 LONG 2.89348e-79 Apple

[strategy] 1: FILL at 1555948800 LONG 4.59719e-82 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1556035200 LONG 1.15687e-84 Apple

[strategy] 1: FILL at 1556035200 LONG 1.8477e-87 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1556121600 LONG 4.66052e-90 Apple

[strategy] 1: FILL at 1556121600 LONG 7.33253e-93 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1556208000 LONG 1.45499e-95 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1556467200 LONG 2.8723e-98 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1556812800 LONG 7.20014e-101 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1557676800 SHORT 1 Apple

[strategy] 1: FILL at 1557676800 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1557763200 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1558022400 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1558368000 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1558454400 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1558540800 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1558627200 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1558972800 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1559059200 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1559145600 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1559232000 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1559664000 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1559750400 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1559836800 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1560355200 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1560441600 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1560700800 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1560787200 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1560873600 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1560960000 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1561046400 LONG 1 Apple

[strategy] 1: FILL at 1561046400 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1561305600 LONG 1 Apple

[strategy] 1: FILL at 1561305600 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1561392000 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1561478400 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1561564800 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1562256000 LONG 1 Apple

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1563206400 LONG 0.563003 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1563292800 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1563379200 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1564070400 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1564329600 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1564416000 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1564502400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1568304000 LONG 0 Apple

[strategy] 1: FILL at 1568304000 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1568563200 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1568649600 LONG 0 Apple

[strategy] 1: FILL at 1568649600 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1568736000 LONG 0 Apple

[strategy] 1: FILL at 1568736000 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1569168000 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1570723200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1570982400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1571241600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1571587200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1571673600 LONG 0 Apple

[strategy] 1: FILL at 1571673600 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1571760000 LONG 0 Apple

[strategy] 1: FILL at 1571760000 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1571846400 LONG 0 Apple

[strategy] 1: FILL at 1571846400 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1571932800 LONG 0 Apple

[strategy] 1: FILL at 1571932800 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1572192000 LONG 0 Apple

[strategy] 1: FILL at 1572192000 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1572278400 LONG 0 Apple

[strategy] 1: FILL at 1572278400 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1572364800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1572451200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1572537600 LONG 0 Apple

[strategy] 1: FILL at 1572537600 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1572796800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1572883200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1572969600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1573056000 LONG 0 Apple

[strategy] 1: FILL at 1573056000 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1573142400 LONG 0 Apple

[strategy] 1: FILL at 1573142400 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1573401600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1573488000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1573574400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1573660800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1573747200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1574006400 LONG 0 Apple

[strategy] 1: FILL at 1574006400 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1574092800 LONG 0 Apple

[strategy] 1: FILL at 1574092800 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1574179200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1574611200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1575993600 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1576080000 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1576166400 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1576425600 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1576684800 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1576771200 LONG 0 Apple

[strategy] 1: FILL at 1576771200 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1577030400 LONG 0 Apple

[strategy] 1: FILL at 1577030400 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1577116800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1577289600 LONG 0 Apple

[strategy] 1: FILL at 1577289600 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1577376000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1577635200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1577721600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1577894400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1577980800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1578240000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1578326400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1578412800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1578499200 LONG 0 Apple

[strategy] 1: FILL at 1578499200 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1578585600 LONG 0 Apple

[strategy] 1: FILL at 1578585600 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1578844800 LONG 0 Apple

[strategy] 1: FILL at 1578844800 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1578931200 LONG 0 Apple

[strategy] 1: FILL at 1578931200 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1579017600 LONG 0 Apple

[strategy] 1: FILL at 1579017600 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1579104000 LONG 0 Apple

[strategy] 1: FILL at 1579104000 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1579190400 LONG 0 Apple

[strategy] 1: FILL at 1579190400 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1579536000 LONG 0 Apple

[strategy] 1: FILL at 1579536000 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1579622400 LONG 0 Apple

[strategy] 1: FILL at 1579622400 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1579708800 LONG 0 Apple

[strategy] 1: FILL at 1579708800 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1579795200 LONG 0 Apple

[strategy] 1: FILL at 1579795200 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1582560000 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1582732800 SHORT 1 Apple

[strategy] 1: FILL at 1582732800 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1582819200 SHORT 1 Apple

[strategy] 1: FILL at 1582819200 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1583164800 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1583337600 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1583424000 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1583683200 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1583856000 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1583942400 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1586707200 LONG 1 Apple

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1587052800 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1587484800 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1587571200 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1587657600 LONG 1 Apple

[strategy] 1: FILL at 1587657600 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1588867200 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1589126400 LONG 1 Apple

[strategy] 1: FILL at 1589126400 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1589212800 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1589299200 LONG 0.254845 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1589385600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1589472000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1589731200 LONG 0 Apple

[strategy] 1: FILL at 1589731200 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1589817600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1589904000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1589990400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1590076800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1591027200 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1591113600 LONG 0 Apple

[strategy] 1: FILL at 1591113600 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1591286400 LONG 0 Apple

[strategy] 1: FILL at 1591286400 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1591545600 LONG 0 Apple

[strategy] 1: FILL at 1591545600 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1591632000 LONG 0 Apple

[strategy] 1: FILL at 1591632000 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1591718400 LONG 0 Apple

[strategy] 1: FILL at 1591718400 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1592236800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1592323200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1592409600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1592755200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1592841600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1592928000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1593532800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1593964800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1594137600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1594224000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1594310400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1594742400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1594915200 LONG 0 Apple

[strategy] 1: FILL at 1594915200 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1595174400 LONG 0 Apple

[strategy] 1: FILL at 1595174400 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1595260800 LONG 0 Apple

[strategy] 1: FILL at 1595260800 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1595347200 LONG 0 Apple

[strategy] 1: FILL at 1595347200 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1596556800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1596643200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1596988800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1597161600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1597248000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1597334400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1597593600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1597680000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1597766400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1597852800 LONG 0 Apple

[strategy] 1: FILL at 1597852800 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1597939200 LONG 0 Apple

[strategy] 1: FILL at 1597939200 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1598198400 LONG 0 Apple

[strategy] 1: FILL at 1598198400 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1598284800 LONG 0 Apple

[strategy] 1: FILL at 1598284800 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1598371200 LONG 0 Apple

[strategy] 1: FILL at 1598371200 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1598457600 LONG 0 Apple

[strategy] 1: FILL at 1598457600 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1598544000 LONG 0 Apple

[strategy] 1: FILL at 1598544000 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1598803200 LONG 0 Apple

[strategy] 1: FILL at 1598803200 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1598889600 LONG 0 Apple

[strategy] 1: FILL at 1598889600 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1598976000 LONG 0 Apple

[strategy] 1: FILL at 1598976000 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1600617600 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1600704000 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1600790400 SHORT 1 Apple

[strategy] 1: FILL at 1600790400 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1600876800 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1602518400 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1602604800 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1602691200 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1602777600 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1603296000 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1603382400 LONG 0.420152 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1603641600 LONG 8.92619e-17 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1603728000 LONG 9.82475e-33 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1603987200 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1604246400 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1604592000 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1604851200 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1605196800 LONG 0.427814 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1605456000 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1605542400 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1605628800 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1605715200 LONG 0 Apple

[strategy] 1: FILL at 1605715200 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1605801600 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1607875200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1607961600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1608048000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1608134400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1608566400 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1608652800 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1608739200 LONG 1 Apple

[strategy] 1: FILL at 1608739200 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1609084800 LONG 0.953686 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1609257600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1611158400 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1611244800 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1611504000 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1611590400 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1611676800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1612195200 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1612281600 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1612368000 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1612454400 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1612713600 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1612800000 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1612886400 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1612972800 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1613059200 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1613404800 SHORT 1 Apple

[strategy] 1: FILL at 1613404800 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1613491200 SHORT 1 Apple

[strategy] 1: FILL at 1613491200 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1613577600 LONG 0.455842 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1613664000 LONG 6.75665e-17 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1613923200 SHORT 1 Apple

[strategy] 1: FILL at 1613923200 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1614009600 SHORT 1 Apple

[strategy] 1: FILL at 1614009600 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1614096000 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1614182400 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1614268800 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1614614400 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1614700800 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1614787200 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1614873600 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1615132800 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1617552000 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1617638400 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1617724800 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1617811200 LONG 1 Apple

[strategy] 1: FILL at 1617811200 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1617897600 LONG 1 Apple

[strategy] 1: FILL at 1617897600 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1618156800 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1618243200 LONG 0.501338 Apple

[strategy] 1: FILL at 1618243200 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1618329600 LONG 0 Apple

[strategy] 1: FILL at 1618329600 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1618416000 LONG 0 Apple

[strategy] 1: FILL at 1618416000 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1618502400 LONG 0 Apple

[strategy] 1: FILL at 1618502400 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1618761600 LONG 0 Apple

[strategy] 1: FILL at 1618761600 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1618848000 LONG 0 Apple

[strategy] 1: FILL at 1618848000 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1618934400 LONG 0 Apple

[strategy] 1: FILL at 1618934400 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1619020800 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1619625600 LONG 0 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1619712000 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1620748800 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1620835200 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1622563200 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1622649600 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1622736000 LONG 0.030985 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1622995200 LONG 3.59797e-18 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1623081600 LONG 7.14022e-21 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1623168000 LONG 1.42172e-23 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1623254400 LONG 2.80658e-26 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1623340800 LONG 5.62466e-29 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1623600000 LONG 1.11798e-31 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1623686400 LONG 2.23938e-34 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1623859200 LONG 4.3164e-37 Apple

[strategy] 1: FILL at 1623859200 LONG 8.91571e-40 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1623945600 LONG 1.79276e-42 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1624204800 LONG 3.42951e-45 Apple

[strategy] 1: FILL at 1624204800 LONG 7.10649e-48 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1624291200 LONG 1.3519e-50 Apple

[strategy] 1: FILL at 1624291200 LONG 2.82476e-53 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1624377600 LONG 5.4081e-56 Apple

[strategy] 1: FILL at 1624377600 LONG 1.13244e-58 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1624464000 LONG 2.16361e-61 Apple

[strategy] 1: FILL at 1624464000 LONG 4.49159e-64 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1624550400 LONG 8.65663e-67 Apple

[strategy] 1: FILL at 1624550400 LONG 1.7971e-69 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1624809600 LONG 3.41292e-72 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1624896000 LONG 6.74149e-75 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1624982400 LONG 1.34076e-77 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1625068800 LONG 2.67278e-80 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1625155200 LONG 5.23758e-83 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1625500800 LONG 1.03129e-85 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1625587200 LONG 2.02418e-88 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1625673600 LONG 4.08186e-91 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1625760000 LONG 8.05047e-94 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1626019200 LONG 1.61528e-96 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1626105600 LONG 3.20206e-99 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1626192000 LONG 6.24717e-102 Apple

[strategy] 1: FILL at 1626192000 LONG 1.39721e-104 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1626278400 LONG 2.50513e-107 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1626364800 LONG 5.07672e-110 Apple

[strategy] 1: FILL at 1626364800 LONG 1.11642e-112 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1626796800 LONG 2.21791e-115 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1626883200 LONG 4.40719e-118 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1626969600 LONG 8.51886e-121 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1627228800 LONG 1.67978e-123 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1628179200 LONG 3.4201e-126 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1628438400 LONG 6.78552e-129 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1629129600 LONG 1.25479e-131 Apple

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1629648000 LONG 2.64932e-134 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1629734400 LONG 5.24507e-137 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1629820800 LONG 1.04392e-139 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1629907200 LONG 2.0979e-142 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1629993600 LONG 4.12121e-145 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1630252800 LONG 8.18217e-148 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1630339200 LONG 1.63488e-150 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1630425600 LONG 3.25799e-153 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1630944000 LONG 6.52391e-156 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1631030400 LONG 1.23177e-158 Apple

[strategy] 1: FILL at 1631030400 LONG 2.61578e-161 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1631116800 LONG 5.22525e-164 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1632067200 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1632672000 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1632758400 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1632844800 SHORT 1 Apple

[strategy] 1: FILL at 1632844800 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1634832000 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1635091200 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1635177600 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1635264000 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1635350400 LONG 0.731687 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1635696000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1635782400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1635868800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1636646400 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1637164800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1637251200 LONG 0 Apple

[strategy] 1: FILL at 1637251200 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1637510400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1637596800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1637683200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1637856000 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1638201600 LONG 0.867198 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1638288000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1638374400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1638460800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1638720000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1638806400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1638892800 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1638979200 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1639065600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1641312000 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1642089600 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1642435200 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1642521600 SHORT 1 Apple

[strategy] 1: FILL at 1642521600 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1642608000 SHORT 1 Apple

[strategy] 1: FILL at 1642608000 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1642694400 SHORT 1 Apple

[strategy] 1: FILL at 1642694400 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1642953600 SHORT 1 Apple

[strategy] 1: FILL at 1642953600 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1643040000 SHORT 1 Apple

[strategy] 1: FILL at 1643040000 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1643126400 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1643212800 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1645545600 SHORT 1 Apple

[strategy] 1: FILL at 1645545600 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1646668800 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1648137600 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1648396800 LONG 1 Apple

[strategy] 1: FILL at 1648396800 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1648569600 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1648656000 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1648742400 LONG 1 Apple

[strategy] 1: FILL at 1648742400 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1649001600 LONG 1 Apple

[strategy] 1: FILL at 1649001600 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1649088000 LONG 1 Apple

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1649779200 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1649865600 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1650211200 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1650297600 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1650384000 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1650470400 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1650556800 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1650816000 SHORT 1 Apple

[strategy] 1: FILL at 1650816000 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1650902400 SHORT 1 Apple

[strategy] 1: FILL at 1650902400 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1650988800 SHORT 1 Apple

[strategy] 1: FILL at 1650988800 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1651161600 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1653321600 SHORT 1 Apple

[strategy] 1: FILL at 1653321600 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1655395200 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1657209600 LONG 1 Apple

[strategy] 1: FILL at 1657209600 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1657468800 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1658160000 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1658246400 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1658332800 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1658419200 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1658678400 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1659024000 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1659283200 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1659369600 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1659456000 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1659542400 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1659628800 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1659888000 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1659974400 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1660060800 LONG 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1660147200 LONG 1 Apple

[strategy] 1: FILL at 1660147200 LONG 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1660233600 LONG 1 Apple

[strategy] 1: FILL at 1660233600 LONG 0.92065 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1660492800 LONG 0 Apple

[strategy] 1: FILL at 1660492800 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1660579200 LONG 0 Apple

[strategy] 1: FILL at 1660579200 LONG 0 Google

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1660665600 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1660752000 LONG 0 Apple

[strategy] 1: ORDER [symbol]Apple [direction]LONG [quantity]1

[strategy] 1: FILL at 1660838400 LONG 0 Apple

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1661788800 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1661875200 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1661961600 SHORT 1 Apple

[strategy] 1: FILL at 1661961600 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1662048000 SHORT 1 Apple

[strategy] 1: FILL at 1662048000 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1662393600 SHORT 1 Apple

[strategy] 1: FILL at 1662393600 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1662480000 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1662566400 SHORT 1 Apple

[strategy] 1: FILL at 1662566400 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1662652800 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1663171200 SHORT 1 Apple

[strategy] 1: FILL at 1663171200 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1663776000 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1663862400 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1664208000 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1664294400 SHORT 1 Google

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1664380800 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: ORDER [symbol]Google [direction]SHORT [quantity]1

[strategy] 1: FILL at 1664467200 SHORT 1 Apple

[strategy] 1: FILL at 1664467200 SHORT 1 Google

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1665331200 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1665417600 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Apple [direction]SHORT [quantity]1

[strategy] 1: FILL at 1665504000 SHORT 1 Apple

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1669132800 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1669305600 LONG 1 Google

[strategy] 1: ORDER [symbol]Google [direction]LONG [quantity]1

[strategy] 1: FILL at 1669737600 LONG 1 Google

----------BackTest ended----------

[Performance Metrics of Strategy 0]
Average Return (Daily) : 0.0110852%
Volatility (Daily) : 0.318148%
Volatility Downside (Daily) : 0.336702%
Sharpe Ratio (Annually) : 0.665671
Sortino Ratio (Annually) : 0.62899
Compound Annual Growth Rate : 3.93235%
Total Return : 14.2296%

[Performance Metrics of Strategy 1]
Average Return (Daily) : 0.0205001%
Volatility (Daily) : 1.11802%
Volatility Downside (Daily) : 0.939042%
Sharpe Ratio (Annually) : 0.350309
Sortino Ratio (Annually) : 0.417078
Compound Annual Growth Rate : 20.4036%
Total Return : 89.7366%

```

