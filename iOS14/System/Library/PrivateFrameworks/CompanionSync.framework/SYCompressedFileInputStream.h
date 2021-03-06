/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <CoreFoundation/NSInputStream.h>
#import <libobjc.A.dylib/_SYStreamRunLoopSourceHandler.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <libobjc.A.dylib/SYStreamEventHandlerBlocks.h>
#import <libobjc.A.dylib/SYStreamThroughputCounter.h>
#import <libobjc.A.dylib/SYStreamProgress.h>

@class NSURL, _SYStreamGuts, NSProgress, NSString;

@interface SYCompressedFileInputStream : NSInputStream <_SYStreamRunLoopSourceHandler, NSStreamDelegate, SYStreamEventHandlerBlocks, SYStreamThroughputCounter, SYStreamProgress> {

	NSURL* _url;
	gzFile_s* _file;
	_SYStreamGuts* _internal;
	/*^block*/id _onOpenComplete;
	/*^block*/id _onBytesAvailable;
	/*^block*/id _onSpaceAvailable;
	/*^block*/id _onEndOfFile;
	/*^block*/id _onError;
	/*^block*/id _onClose;
	NSProgress* _progress;
	unsigned long long _byteCount;

}

@property (getter=_internal,nonatomic,readonly) _SYStreamGuts * internal; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id onOpenComplete;                                          //@synthesize onOpenComplete=_onOpenComplete - In the implementation block
@property (nonatomic,copy) id onBytesAvailable;                                        //@synthesize onBytesAvailable=_onBytesAvailable - In the implementation block
@property (nonatomic,copy) id onSpaceAvailable;                                        //@synthesize onSpaceAvailable=_onSpaceAvailable - In the implementation block
@property (nonatomic,copy) id onEndOfFile;                                             //@synthesize onEndOfFile=_onEndOfFile - In the implementation block
@property (nonatomic,copy) id onError;                                                 //@synthesize onError=_onError - In the implementation block
@property (nonatomic,copy) id onClose;                                                 //@synthesize onClose=_onClose - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesThroughput;                     //@synthesize byteCount=_byteCount - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                    //@synthesize progress=_progress - In the implementation block
-(unsigned long long)streamStatus;
-(id)streamError;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(long long)read:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(id)_internal;
-(BOOL)getBuffer:(char**)arg1 length:(unsigned long long*)arg2 ;
-(void)open;
-(NSProgress *)progress;
-(id)initWithURL:(id)arg1 ;
-(id)initWithFileAtPath:(id)arg1 ;
-(id)delegate;
-(BOOL)setProperty:(id)arg1 forKey:(id)arg2 ;
-(void)close;
-(BOOL)hasBytesAvailable;
-(id)propertyForKey:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(id)onError;
-(id)onClose;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)_SY_notifyOnQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithCompressedFileAtURL:(id)arg1 ;
-(void)_postEventToDelegate:(unsigned long long)arg1 ;
-(id)onOpenComplete;
-(void)setOnOpenComplete:(id)arg1 ;
-(id)onBytesAvailable;
-(void)setOnBytesAvailable:(id)arg1 ;
-(id)onSpaceAvailable;
-(void)setOnSpaceAvailable:(id)arg1 ;
-(id)onEndOfFile;
-(void)setOnEndOfFile:(id)arg1 ;
-(void)setOnError:(id)arg1 ;
-(void)setOnClose:(id)arg1 ;
-(unsigned long long)bytesThroughput;
@end

