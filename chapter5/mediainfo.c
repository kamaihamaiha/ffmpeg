#include <libavutil/log.h>
#include <libavformat/avformat.h>
 
int main(int argc,char *agrv[]){
         int ret;

         //声明结构体
         AVFormatContext *fmt_ctx = NULL;
         
         //step1 设置日志
         av_log_set_level(AV_LOG_INFO);
 
         //step2 注册流媒体
         av_register_all();
         
         //step3 打开流媒体文件
         ret = avformat_open_input(&fmt_ctx,"./test.mp4",NULL,NULL);
         if(ret < 0){
       av_log(NULL,AV_LOG_INFO,"Failed open file: test.mp4 %s\n",av_err2str(ret));
               return -1;                                                  
         }
        
         //step4 打印流媒体文件
         av_dump_format(fmt_ctx,0,"./test.mp4",0);
         
         //step5 关闭流媒体文件
         avformat_close_input(&fmt_ctx);
         return 0;
}
