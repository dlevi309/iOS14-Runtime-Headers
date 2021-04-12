/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccessExpress.framework/CDDataAccessExpress
*/


@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface DACPLogDFile : NSObject {

	NSString* _folder;
	NSString* _baseName;
	NSString* _UUID;
	NSString* _path;
	int _fd;
	NSObject*<OS_dispatch_source> _fileEventDispatchSource;
	BOOL _fileWasDeleted;

}

@property (nonatomic,retain,readonly) NSString * folder;                //@synthesize folder=_folder - In the implementation block
@property (nonatomic,retain,readonly) NSString * baseName;              //@synthesize baseName=_baseName - In the implementation block
@property (nonatomic,retain,readonly) NSString * UUID;                  //@synthesize UUID=_UUID - In the implementation block
-(NSString *)UUID;
-(NSString *)folder;
-(id)_filePathsMatchingPattern:(id)arg1 ;
-(id)_getLatestMatchingFilePath;
-(void)_beginWatchingFile;
-(id)_startNewFile;
-(void)_closeFileWithFileEventDispatchSource:(id)arg1 ;
-(void)_openFileOutDidCreateNewFile:(BOOL*)arg1 outNewFilePath:(id*)arg2 ;
-(id)initWithFolder:(id)arg1 baseName:(id)arg2 ;
-(BOOL)logData:(id)arg1 outDidCreateNewFile:(BOOL*)arg2 outNewFilePath:(id*)arg3 ;
-(id)startNewFile;
-(void)checkForMaximumFileSize:(long long)arg1 wantsCompressed:(BOOL)arg2 outDidCreateNewFile:(BOOL*)arg3 outNewFilePath:(id*)arg4 ;
-(void)cullFilesMaxFileCount:(long long)arg1 ;
-(NSString *)baseName;
@end
