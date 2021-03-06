/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDCameraSessionID.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface HMDCameraSnapshotSessionID : HMDCameraSessionID <NSCopying> {

	BOOL _snapshotRequestForBulletin;
	NSString* _snapshotCharacteristicEventUUID;
	unsigned long long _snapshotReason;
	NSNumber* _streamingTier;

}

@property (readonly) NSString * snapshotCharacteristicEventUUID;                                       //@synthesize snapshotCharacteristicEventUUID=_snapshotCharacteristicEventUUID - In the implementation block
@property (readonly) unsigned long long snapshotReason;                                                //@synthesize snapshotReason=_snapshotReason - In the implementation block
@property (getter=isSnapshotRequestForBulletin,readonly) BOOL snapshotRequestForBulletin;              //@synthesize snapshotRequestForBulletin=_snapshotRequestForBulletin - In the implementation block
@property (readonly) NSNumber * streamingTier;                                                         //@synthesize streamingTier=_streamingTier - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)snapshotReason;
-(id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 cameraSessionAppID:(id)arg3 descriptionString:(id)arg4 spiClient:(BOOL)arg5 snapshotReason:(unsigned long long)arg6 snapshotRequestForBulletin:(BOOL)arg7 snapshotCharacteristicEventUUID:(id)arg8 streamingTier:(id)arg9 ;
-(BOOL)isSnapshotRequestForBulletin;
-(NSString *)snapshotCharacteristicEventUUID;
-(NSNumber *)streamingTier;
-(id)initWithAccessory:(id)arg1 message:(id)arg2 ;
@end

