/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LiveFS.framework/LiveFS
*/


@protocol LiveFSMount
@required
-(void)LiveMountList:(/*^block*/id)arg1;
-(void)LiveMountListenerForVolume:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)LiveMountEjectVolume:(id)arg1 withFlags:(unsigned)arg2 reply:(/*^block*/id)arg3;
-(void)LiveMountEjectDisk:(id)arg1 reply:(/*^block*/id)arg2;
-(void)unlockVolume:(id)arg1 password:(id)arg2 saveToKeychain:(BOOL)arg3 completionHandler:(/*^block*/id)arg4;
-(void)LiveMountListenerForVolume:(id)arg1 reply:(/*^block*/id)arg2;
-(void)LiveMountSharesAtServer:(id)arg1 credentialType:(long long)arg2 credential:(id)arg3 reply:(/*^block*/id)arg4;
-(void)LiveMountAddVolume:(id)arg1 atServer:(id)arg2 credentialType:(long long)arg3 credential:(id)arg4 reply:(/*^block*/id)arg5;
-(void)LiveMountAddDisk:(id)arg1 reply:(/*^block*/id)arg2;
-(void)LiveMountAddVolume:(id)arg1 withListener:(id)arg2 andWithDescription:(id)arg3 reply:(/*^block*/id)arg4;
-(void)LiveMountCredentialTypes:(/*^block*/id)arg1;

@end

