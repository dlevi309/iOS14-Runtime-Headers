/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/

#import <AirTrafficDevice/ATStoreDownloadOperation.h>

@class ICMusicRestoreRequest, ICMediaAssetDownloadRequest;

@interface ATMusicRestoreOperation : ATStoreDownloadOperation {

	ICMusicRestoreRequest* _restoreRequest;
	ICMediaAssetDownloadRequest* _assetDownloadRequest;

}
-(void)execute;
-(void)finishWithError:(id)arg1 ;
-(void)cancel;
-(void)_downloadRestoreAssetWithRequestContext:(id)arg1 restoreResponse:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

