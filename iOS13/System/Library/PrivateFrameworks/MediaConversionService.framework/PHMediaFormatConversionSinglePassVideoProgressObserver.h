/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
*/


@class NSProgress, PHMediaFormatConversionRequest, NSURL, NSFileHandle;

@interface PHMediaFormatConversionSinglePassVideoProgressObserver : NSObject {

	NSProgress* _progress;
	PHMediaFormatConversionRequest* _request;
	NSURL* _observedFileURL;
	NSFileHandle* _observedFileHandle;
	unsigned long long _lastFileSize;

}

@property (retain) NSProgress * progress;                                 //@synthesize progress=_progress - In the implementation block
@property (__weak) PHMediaFormatConversionRequest * request;              //@synthesize request=_request - In the implementation block
@property (retain) NSURL * observedFileURL;                               //@synthesize observedFileURL=_observedFileURL - In the implementation block
@property (retain) NSFileHandle * observedFileHandle;                     //@synthesize observedFileHandle=_observedFileHandle - In the implementation block
@property (assign) unsigned long long lastFileSize;                       //@synthesize lastFileSize=_lastFileSize - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSProgress *)progress;
-(void)setRequest:(PHMediaFormatConversionRequest *)arg1 ;
-(PHMediaFormatConversionRequest *)request;
-(void)stopObserving;
-(void)setProgress:(NSProgress *)arg1 ;
-(unsigned long long)lastFileSize;
-(void)startObservingProgress:(id)arg1 forRequest:(id)arg2 ;
-(NSURL *)observedFileURL;
-(void)setObservedFileURL:(NSURL *)arg1 ;
-(NSFileHandle *)observedFileHandle;
-(void)setObservedFileHandle:(NSFileHandle *)arg1 ;
-(void)setLastFileSize:(unsigned long long)arg1 ;
@end

