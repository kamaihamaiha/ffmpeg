#include <libavutil/log.h>
#include <libavformat/avformat.h>

int main(int argc,char *argv[]){
		
	int ret;
	AVIODirContext *ctx = NULL;
	AVIODirEntry *entry = NULL;
	av_log_set_level(AV_LOG_INFO);
	
	//open dir
	ret = avio_open_dir(&ctx,"./",NULL);
	if(ret < 0){
		av_log(NULL,AV_LOG_ERROR,"Can't open dir:%s\n",av_err2str(ret));
		return -1;
	}

	//read dir
	while(1){
		ret = avio_read_dir(ctx,&entry);
		if (ret < 0){
			av_log(NULL,AV_LOG_ERROR,"Can't read dir:%s\n",av_err2str(ret)); goto __fail;
		
		} 
		//到了文件末尾，就退出
		if(!entry){
			break;
		}

		//print info
		av_log(NULL,AV_LOG_INFO,"%12"PRId64" %s \n",entry->size,entry->name);
		//free entry
		avio_free_directory_entry(&entry);
	}

	//close dir
__fail:
	avio_close_dir(&ctx);
	return 0;		
}
