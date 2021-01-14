/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
*/


@protocol MBManagerDelegate
@optional
-(void)managerDidFinishRestore:(id)arg1;
-(void)manager:(id)arg1 didFailRestoreWithError:(id)arg2;
-(void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3;
-(void)managerDidCancelRestore:(id)arg1;
-(void)managerDidLoseConnectionToService:(id)arg1;
-(void)manager:(id)arg1 didSetBackupEnabled:(BOOL)arg2;
-(void)managerDidFinishBackup:(id)arg1;
-(void)managerDidFinishScan:(id)arg1;
-(void)manager:(id)arg1 didScanBundleWithID:(id)arg2 bytesUsed:(unsigned long long)arg3;
-(void)manager:(id)arg1 didScanDomainWithName:(id)arg2 forBundleID:(id)arg3 bytesUsed:(unsigned long long)arg4;
-(void)manager:(id)arg1 didScanFiles:(id)arg2 forDomainWithName:(id)arg3 bundleID:(id)arg4;
-(void)manager:(id)arg1 didFinishRestoreForPath:(id)arg2;
-(void)managerDidFinishVerification:(id)arg1;
-(void)manager:(id)arg1 didFailBackupWithError:(id)arg2;
-(void)manager:(id)arg1 didFailScanWithError:(id)arg2;
-(void)manager:(id)arg1 didFailRestoreForPath:(id)arg2 withError:(id)arg3;
-(void)manager:(id)arg1 didFailVerificationWithError:(id)arg2;
-(void)managerDidUpdateBackgroundRestoreProgress:(id)arg1;
-(void)manager:(id)arg1 didFinishDeviceTransferWithError:(id)arg2;
-(void)manager:(id)arg1 didFinishDeviceTransferKeychainTransfer:(id)arg2;
-(void)manager:(id)arg1 didFinishDeviceTransferPreflight:(id)arg2 error:(id)arg3;
-(void)manager:(id)arg1 didUpdateDeviceTransferProgress:(id)arg2;
-(void)manager:(id)arg1 didUpdateDeviceTransferConnectionInfo:(id)arg2;

@end
