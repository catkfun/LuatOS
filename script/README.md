# LuatOS 脚本库

## 目录说明

|目录名称|目录内容|着重点|典型示例|
|--------|-------|----|---------|
|[apidemo](apidemo) |内置库的实例|单一库API用法|[GPIO控制](apidemo/gpio)|
|[combin](combin)|库的组合使用|演示多API协同操作|[串口命令控制继电器](uart_gpio)|
|[turnkey](turnkey)|准项目级方案|真实项目的演示|[扫码枪turnkey](turnkey/scanner_air105/)|
|[libs](libs)|外部库合集|外设驱动或控制|将外设驱动做成标准化的库|[ADS1115](libs/peripheral/ADS1115)|

## apidemo 简述

对LuatOS内嵌的Lua库(基本上为C实现), 演示函数调用的用法, 原则添加一个内置库的时候要提交对应的apidemo

## combin 简述

在日常使用中,常常会遇到多个库协同使用, 例如 使用 uart 接收串口数据, 执行业务逻辑后开启或关闭GPIO输出

## turnkey 简述

将真实项目抽取核心逻辑做成turnkey方案, 提供

1. 详细源码注释
2. 开发文档
3. 硬件需求
4. 效果演示,部署演示

## libs 简述

当前主要存放 `外设驱动` , 快捷地控制外设或读取外设数据
