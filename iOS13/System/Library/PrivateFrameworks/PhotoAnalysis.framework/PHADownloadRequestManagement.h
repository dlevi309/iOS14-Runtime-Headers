/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@protocol PHADownloadRequestManagement <NSObject>
@property (assign) unsigned long long expectedRequestsCount; 
@required
-(void)requestPermissionToDownloadWithPhotoLibrary:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(unsigned long long)expectedRequestsCount;
-(void)setExpectedRequestsCount:(unsigned long long)arg1;

@end

