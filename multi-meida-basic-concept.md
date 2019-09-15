## 多媒体文件基本概念
- 多媒体文件是个容器
- 在容器里有很多流(Stream/Track),以前也叫轨。 流之间没有交叉。
- 每一种流是由不同的编码器编码的。
- 从流中读取的数据称为 **包**。
- 包中包含一个或多个帧

---
### 操作流数据基本步骤
解复用 --> 获取流 --> 读数据包 --> 释放资源

### 几个重要的结构体
- AVFormatContext : 连接多个 API 的桥梁
- AVStream 
- AVPacket

---
### FFmpeg 打印音视频 Meta 信息
- av_register_all()
- avformat_open_input() / avformat_close_input()
- av_dump_format()
---
### 练习
- mediainfo.c
