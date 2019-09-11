#include <stdio.h>
#include <libavformat/avformat.h>
#include <libavutil/log.h>

int main(int argc,char *argv[]){
	
	int res;
	res = avpriv_io_delete("./test.txt");
  	if(res < 0){
		av_log(NULL,AV_LOG_ERROR,"Failed to delete file: test.txt\n");
	}
	//rename file
	int res2;
	res2 = avpriv_io_move("./1.txt","./one.txt");
	if(res2 < 0){
		av_log(NULL,AV_LOG_ERROR,"Failed to rename 1.txt!\n");
	}
	av_log(NULL,AV_LOG_INFO,"rename file: 1.txt success!\n");
	return 0;
}

