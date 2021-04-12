/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@protocol DDSAssetProvidingDelegate <NSObject>
@required
-(void)didUpdateManifestWithError:(id)arg1;
-(void)didCompleteDownloadForAssertion:(id)arg1 error:(id)arg2;
-(void)didChangeDownloadState:(unsigned long long)arg1 forAsset:(id)arg2;
-(void)didCompleteDownloadForAssertions:(id)arg1 error:(id)arg2;

@end
