/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/

#import <libobjc.A.dylib/MSASPlatform.h>

@class ACAccountStore, NSString;

@interface MSASPlatformImplementation : NSObject <MSASPlatform> {

	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)shouldLogAtLevel:(int)arg1 ;
-(Class)pluginClass;
-(ACAccountStore *)accountStore;
-(BOOL)shouldEnableNewFeatures;
-(id)_accountForPersonID:(id)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(id)pushTokenForPersonID:(id)arg1 ;
-(BOOL)personIDUsesProductionPushEnvironment:(id)arg1 ;
-(int)MMCSConcurrentConnectionsCount;
-(BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
-(BOOL)personIDEnabledForAlbumSharing:(id)arg1 ;
-(id)MMCSDownloadSocketOptionsForPersonID:(id)arg1 ;
-(id)MMCSUploadSocketOptionsForPersonID:(id)arg1 ;
-(void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4 ;
-(id)albumSharingDaemon;
-(id)pathAlbumSharingDir;
-(id)baseSharingURLForPersonID:(id)arg1 ;
-(id)personIDsEnabledForAlbumSharing;
-(BOOL)MSASIsAllowedToTransferMetadata;
-(BOOL)MSASIsAllowedToUploadAssets;
-(BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1 ;
@end

