/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/


@protocol NSFileProviderLiveItemConnectionCoordination
@required
-(unsigned long long)LICCnewConnectionIDOrError:(id*)arg1;
-(void)LICCinvalidateFileNodesForConnection:(unsigned long long)arg1;
-(void)LICCreleaseConnectionAllocation:(unsigned long long)arg1;
-(void)LISMPinvalidateAllConnections;

@end

