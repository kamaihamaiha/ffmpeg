#include <stdio.h>
#include <libavutil/log.h>

int main(int args,char *argv[]){
		
	//设置日志级别
	av_log_set_level(AV_LOG_DEBUG);
	av_log(NULL,AV_LOG_INFO,"This is a FFmpeg log info\n");
	return 0;		
}
