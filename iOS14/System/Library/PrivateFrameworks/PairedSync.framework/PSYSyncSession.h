/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
*/

#import <PairedSync/PairedSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSUUID, NSArray;

@interface PSYSyncSession : NSObject <NSCopying, NSSecureCoding> {

	NSDictionary* _activityMap;
	BOOL _supportsMigrationSync;
	NSUUID* _pairingIdentifier;
	long long _switchIndex;
	NSUUID* _sessionIdentifier;
	unsigned long long _syncSessionType;
	NSArray* _activities;
	unsigned long long _syncSessionState;

}

@property (nonatomic,retain) NSUUID * pairingIdentifier;                       //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (assign,nonatomic) long long switchIndex;                            //@synthesize switchIndex=_switchIndex - In the implementation block
@property (nonatomic,retain) NSUUID * sessionIdentifier;                       //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long syncSessionType;               //@synthesize syncSessionType=_syncSessionType - In the implementation block
@property (assign,nonatomic) BOOL supportsMigrationSync;                       //@synthesize supportsMigrationSync=_supportsMigrationSync - In the implementation block
@property (nonatomic,retain) NSArray * activities;                             //@synthesize activities=_activities - In the implementation block
@property (assign,nonatomic) unsigned long long syncSessionState;              //@synthesize syncSessionState=_syncSessionState - In the implementation block
@property (nonatomic,readonly) double sessionProgress; 
+(BOOL)supportsSecureCoding;
-(NSArray *)activities;
-(NSUUID *)pairingIdentifier;
-(void)setPairingIdentifier:(NSUUID *)arg1 ;
-(long long)switchIndex;
-(void)setActivities:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSessionIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)sessionIdentifier;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_deepCopy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSwitchIndex:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)sessionProgress;
-(unsigned long long)syncSessionType;
-(void)setSyncSessionType:(unsigned long long)arg1 ;
-(BOOL)supportsMigrationSync;
-(unsigned long long)syncSessionState;
-(void)setSupportsMigrationSync:(BOOL)arg1 ;
-(void)setSyncSessionState:(unsigned long long)arg1 ;
-(id)syncSessionByReplacingActivity:(id)arg1 ;
-(id)initWithPairingIdentifier:(id)arg1 switchIndex:(long long)arg2 sessionIdentifier:(id)arg3 syncSessionType:(unsigned long long)arg4 supportsMigrationSync:(BOOL)arg5 activities:(id)arg6 state:(unsigned long long)arg7 ;
-(id)firstIncompleteActivity;
-(id)incompleteActivities;
-(id)completedActivities;
-(id)activityForLabel:(id)arg1 ;
-(id)activityForService:(id)arg1 ;
-(id)syncSessionByUpdatingActivities:(id)arg1 ;
-(id)syncSessionByUpdatingSyncSessionState:(unsigned long long)arg1 ;
@end
